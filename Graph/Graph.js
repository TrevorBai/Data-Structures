// **************************************************
//       Graph
// **************************************************
class Graph {
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
   */
  addEdge(v1, v2) {
    this.adjacencyList[v1].push(v2);
    this.adjacencyList[v2].push(v1);
  }

  /**
   * @param {any} v1
   * @param {any} v2
   */
  removeEdge(v1, v2) {
    /**
     * @param {any} cur
     */
    this.adjacencyList[v1] = this.adjacencyList[v1].filter((cur) => cur !== v2);
    /**
     * @param {any} cur
     */
    this.adjacencyList[v2] = this.adjacencyList[v2].filter((cur) => cur !== v1);
  }

  /**
   * @param {any} v1
   */
  removeVertex(v1) {
    while (this.adjacencyList[v1].length) {
      const adjacentVertex = this.adjacencyList[v1].pop();
      this.removeEdge(v1, adjacentVertex);
    }
    delete this.adjacencyList[v1];
  }

  /**
   * @param {any} start
   */
  DFSRecursive(start) {
    const result = [];
    const visited = {};
    const adjacencyList = this.adjacencyList;

    // need recursively call dfs so arrow function doesn't work 'cause it can not accept the function name
    (function dfs(vertex) {
      visited[vertex] = true;
      result.push(vertex);
      adjacencyList[vertex].forEach((neighbor) => {
        if (!visited[neighbor]) {
          return dfs(neighbor);
        }
      });
    })(start);

    return result;
  }

  /**
   * @param {any} start
   */
  DFSInterative(start) {
    const stack = [start];
    const result = [];
    const visited = {};
    let currentVertex;

    visited[start] = true;
    while (stack.length) {
      // console.log(stack);
      currentVertex = stack.pop();
      result.push(currentVertex);

      this.adjacencyList[currentVertex].forEach(neighbor => {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          stack.push(neighbor);
        }
      });
    }
    return result;
  }

  /**
 * @param {any} start
 */
  BFSInterative(start) {
    const queue = [start];
    const result = [];
    const visited = {};
    let currentVertex;

    visited[start] = true;
    while (queue.length) {
      // console.log(stack);
      currentVertex = queue.shift();
      result.push(currentVertex);

      this.adjacencyList[currentVertex].forEach(neighbor => {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          queue.push(neighbor);
        }
      });
    }
    return result;
  }
}

const g = new Graph();
// g.addVertex('Dallas');
// g.addVertex('Tokyo');
// g.addVertex('Aspen');
// g.addEdge('Dallas', 'Tokyo');
// g.addEdge('Dallas', 'Aspen');
// // g.removeEdge('Dallas', 'Aspen');
// g.removeVertex('Dallas');

g.addVertex('A');
g.addVertex('B');
g.addVertex('C');
g.addVertex('D');
g.addVertex('E');
g.addVertex('F');

g.addEdge('A', 'B');
g.addEdge('A', 'C');
g.addEdge('B', 'D');
g.addEdge('C', 'E');
g.addEdge('D', 'E');
g.addEdge('D', 'F');
g.addEdge('E', 'F');

console.log('DFSrecursive :>> ', g.DFSRecursive('A'));
console.log('DFSiterative :>> ', g.DFSInterative('A'));
console.log('BFSiterative :>> ', g.BFSInterative('A'));
// console.log('g :>> ', g);
