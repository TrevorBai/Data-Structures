function Graph() {
  this.adjacencyList = {};
}

Graph.prototype.numEdges = function () {
  let total = 0;

  Object.values(this.adjacencyList).forEach((list) => {
    total += list.length;
  });

  // note that we've double-counted up til now since we've looked at
  // the adjacencyList for every node.
  return total / 2;
};

Graph.prototype.addVertex = function (vertex) {
  this.adjacencyList[vertex] = [];
};

Graph.prototype.addEdge = function (vertex1, vertex2) {
  this.adjacencyList[vertex1].push(vertex2);
  this.adjacencyList[vertex2].push(vertex1);
};

Graph.prototype.removeVertex = function (vertex) {
  while (this.adjacencyList[vertex].length) {
    const adjacentVertex = this.adjacencyList[vertex].pop();
    this.removeEdge(adjacentVertex, vertex);
  }
  delete this.adjacencyList[vertex];
};

Graph.prototype.removeEdge = function (vertex1, vertex2) {
  this.adjacencyList[vertex1] = this.adjacencyList[vertex1].filter(
    (v) => v !== vertex2
  );
  this.adjacencyList[vertex2] = this.adjacencyList[vertex2].filter(
    (v) => v !== vertex1
  );
};

function WeightedGraph() {
  Graph.call(this);
}

WeightedGraph.prototype = Object.create(Graph.prototype);
WeightedGraph.prototype.constructor = WeightedGraph;
/***
 *** Use Graph as a constructor for WeightedGraph to inherit from!
 ***
 ***/

WeightedGraph.prototype.addEdge = function (vertex1, vertex2, weight) {
  this.adjacencyList[vertex1].push({ node: vertex2, weight });
  this.adjacencyList[vertex2].push({ node: vertex1, weight });
};

WeightedGraph.prototype.Dijkstra = function (start, finish) {
  // This priority queue is our core set. It stores all vertices and their shortest path
  // either globally or locally. The KEY is every time we extract the node out of it, it HAS
  // TO BE the minimum priority/distance node.
  const q = new PriorityQueue();
  // Distances object is a SET of determined shortest path vertices.
  // Once one is confirmed and added into it, you are NEVER going to modify it at later time.
  const distances = {};
  // Previous object consists of the middle point through which it leads to the shortest
  // path, it will be modified at later time when needed. I.e. when finding shorter path,
  // update this object. I call it Update Stage.
  const previous = {};
  const path = [];
  const adj = this.adjacencyList;
  let smallest;

  // Init states
  // After initializing the priority queue, we are never going to enqueue any new node.
  // Instead, we only update it with either global or local shorted distances.
  for (let vertex in adj) {
    if (vertex === start) {
      q.enqueue(vertex, 0);
    } else {
      q.enqueue(vertex, Infinity);
    }
  }

  while (q.values.length) {
    smallest = q.dequeue();
    distances[smallest.val] = smallest.priority;
    for (let node of adj[smallest.val]) {
      const candidate = distances[smallest.val] + node.weight;

      for (let qNode of q.values) {
        if (qNode.val === node.node) {
          const previousDistance = qNode.priority;
          if (candidate < previousDistance) {
            // Update priority(distance) in priority queue
            qNode.priority = candidate;
            // Let priority queue run, right now when updating a node, it does not automatically sort
            // It only maintains priority queue invariant when enqueuing.
            q.sort();
            // Update previous object
            previous[node.node] = smallest.val;
          }
        }
      }
    }
  }

  path.push(finish);
  while (previous[finish]) {
    path.push(previous[finish]);
    finish = previous[finish];
  }
  path.reverse();

  return path;
};

/***
 *** Use the following as a PriorityQueue (it's a min heap)!
 ***
 ***/
class PriorityQueue {
  constructor() {
    this.values = [];
  }
  enqueue(val, priority) {
    this.values.push({ val, priority });
    this.sort();
  }
  dequeue() {
    return this.values.shift();
  }
  sort() {
    this.values.sort((a, b) => a.priority - b.priority);
  }
}

const g = new WeightedGraph();

g.addVertex('A');
g.addVertex('Z');
g.addVertex('C');
g.addVertex('D');
g.addVertex('E');
g.addVertex('H');
g.addVertex('Q');
g.addVertex('G');

g.addEdge('A', 'Z', 7);
g.addEdge('A', 'C', 8);

g.addEdge('Z', 'Q', 2);

g.addEdge('C', 'G', 4);

g.addEdge('D', 'Q', 8);

g.addEdge('E', 'H', 1);

g.addEdge('H', 'Q', 3);

g.addEdge('Q', 'C', 6);

g.addEdge('G', 'Q', 9);

console.log(g.Dijkstra('A', 'E')); // ['A', 'Z', 'Q', 'H', 'E']
console.log(g.Dijkstra('A', 'Q')); // ['A', 'Z', 'Q']
console.log(g.Dijkstra('A', 'G')); // ['A', 'C', 'G']
console.log(g.Dijkstra('A', 'D')); // ['A', 'Z', 'Q', 'D']
