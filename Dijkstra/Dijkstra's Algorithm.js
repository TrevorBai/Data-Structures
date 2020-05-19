// **************************************************
//       Dijkstra's Algorithm
// **************************************************
class WeightedGraph {
  constructor() {
    this.adjacencyList = {};
  }

  /**
   * @param {any} vertex
   */
  addVertex(vertex) {
    if (!this.adjacencyList[vertex]) {
      this.adjacencyList[vertex] = [];
    }
  }

  /**
   * @param {any} v1
   * @param {any} v2
   * @param {any} weight
   */
  addEdge(v1, v2, weight) {
    this.adjacencyList[v1].push({ vertex: v2, weight });
    this.adjacencyList[v2].push({ vertex: v1, weight });
  }

  /**
   * @param {any} start
   * @param {any} finish
   */
  Dijkstra(start, finish) {
    const nodes = new PriorityQueue();
    const distances = {};
    const previous = {};  // Store the shortest path route so far
    let path = []; // to return at end
    let smallest;

    // Build up initial state
    for (let vertex in this.adjacencyList) {
      if (vertex === start) {
        distances[vertex] = 0;
        nodes.enqueue(vertex, 0);
      } else {
        distances[vertex] = Infinity;
      }
      previous[vertex] = null;
    }
    
    // As long as there is something to visit
    while (nodes.values.length) {
      smallest = nodes.dequeue().val;
      if (smallest === finish) {
        // Build up path to return at end
        while (previous[smallest]) {
          path.push(smallest);
          smallest = previous[smallest];
        }
        break;
      }
      if (smallest || distances[smallest] !== Infinity) {
        for (let neighbor in this.adjacencyList[smallest]) {
          // find neighboring node
          let nextNode = this.adjacencyList[smallest][neighbor];

          // calculate new distance to neighboring node
          let candidate = distances[smallest] + nextNode.weight;
          let nextNeighbor = nextNode.vertex;
          if (candidate < distances[nextNeighbor]) {
            // update new smallest distance to neighbor
            distances[nextNeighbor] = candidate;
            // update previous - shortest route so far
            previous[nextNeighbor] = smallest;
            // enqueue in priority queue with new priority
            nodes.enqueue(nextNeighbor, candidate);
          }
        }
      }
    }
    return path.concat(smallest).reverse();

  }
}

class Node {
  constructor(val, priority) {
    this.val = val;
    this.priority = priority;
  }
}

class PriorityQueue {
  constructor() {
    this.values = [];
  }

  enqueue(val, priority) {
    const newNode = new Node(val, priority);
    this.values.push(newNode);
    this.bubbleUp();
  }

  bubbleUp() {
    let index = this.values.length - 1;
    const element = this.values[index];
    while (index > 0) {
      let parentIdx = Math.floor((index - 1) / 2);
      const parrent = this.values[parentIdx];
      if (parrent.priority <= element.priority) break;
      // Bubble up
      this.values[parentIdx] = element;
      this.values[index] = parrent;
      index = parentIdx;
    }
  }

  dequeue() {
    const min = this.values[0];
    const end = this.values.pop();
    if (this.values.length > 0) {
      this.values[0] = end;
      // Sift down
      this.siftDown();
    }
    return min;
  }

  siftDown() {
    let index = 0;
    const length = this.values.length;
    const element = this.values[0];
    while (true) {
      let leftChildIdx = 2 * index + 1;
      let rightChildIdx = 2 * index + 2;
      let leftChild, rightChild;
      let swap = null;

      if (leftChildIdx < length) {
        leftChild = this.values[leftChildIdx];
        if (leftChild.priority < element.priority) {
          swap = leftChildIdx;
        }
      }

      if (rightChildIdx < length) {
        rightChild = this.values[rightChildIdx];
        if (
          (swap === null && rightChild.priority < element.priority) ||
          (swap !== null && rightChild.priority < leftChild.priority)
        ) {
          swap = rightChildIdx;
        }
      }
      if (swap === null) break;
      this.values[index] = this.values[swap];
      this.values[swap] = element; // element never changes
      index = swap;
    }
  }
}

const wG = new WeightedGraph();
wG.addVertex('A');
wG.addVertex('B');
wG.addVertex('C');
wG.addVertex('D');
wG.addVertex('E');
wG.addVertex('F');

wG.addEdge('A', 'B', 4);
wG.addEdge('A', 'C', 2);
wG.addEdge('B', 'E', 3);
wG.addEdge('C', 'D', 2);
wG.addEdge('C', 'F', 4);
wG.addEdge('D', 'E', 3);
wG.addEdge('D', 'F', 1);
wG.addEdge('E', 'F', 1);

console.log(wG.Dijkstra('A', 'E'));
// console.log('wG.adjacencyList :>> ', wG.adjacencyList);
