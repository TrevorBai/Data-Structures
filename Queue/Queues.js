// **************************************************
//       Queues
// **************************************************

// *********************************
//  using array
// *********************************

// Method 1
let q = []
q.push('First')
q.push('Second')
q.push('Third')
// console.log(q)
// console.log(q.shift())
// console.log(q.shift())
// console.log(q)

// Method 2
let newQ = []
newQ.unshift('First')
newQ.unshift('Second')
newQ.unshift('Third')
// console.log(newQ)
// console.log(newQ.pop())
// console.log(newQ.pop())
// console.log(newQ.pop())
// console.log(newQ)


// *********************************
//  using linked list
// *********************************

class Node {
  constructor(value) {
    this.value = value
    this.next = null
  }
}

class Queue {
  constructor() {
    this.first = null
    this.last = null
    this.size = 0
  }

  enqueue(val) {
    let newNode = new Node(val)
    if (!this.size) {
      this.first = newNode
      this.last = newNode
    } else {
      this.last.next = newNode
      this.last = newNode
    }
    return ++this.size
  }

  // dequeue is identical with pop of stacks implementation
  dequeue() {
    if (!this.size) return null
    let temp = this.first
    if (this.first === this.last) {
      this.last = null
    }
    this.first = this.first.next
    this.size--
    return temp.value
  }
}

let queue = new Queue()
console.log(queue.enqueue('First'))
console.log(queue.enqueue('Second'))
console.log(queue.enqueue('Third'))
console.log(queue)
console.log(queue.dequeue())
console.log(queue.dequeue())
console.log(queue.dequeue())
console.log(queue.dequeue())
console.log(queue)
