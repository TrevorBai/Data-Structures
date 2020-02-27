// **************************************************
//       Stacks
// **************************************************

// *********************************
//  using array
// *********************************

// Method 1
let stack = []

stack.push('google')
stack.push('instagram')
stack.push('youtube')
// console.log(stack)

// console.log(stack.pop())

// console.log(stack)

// Method 2
// Adding and removing from the beginning of the array
// is not that efficient
let newStack = []

newStack.unshift('create new file')
newStack.unshift('resized file')
newStack.unshift('cloned out wrinkle')

// console.log(newStack)
// console.log(newStack.shift())
// console.log(newStack)

// *********************************
//  using linked list
// *********************************

class Node {
  constructor(value) {
    this.value = value
    this.next = null
  }
}

class Stack {
  constructor() {
    this.first = null
    this.last = null
    this.size = 0
  }

  push(value) {
    let newNode = new Node(value)
    if (!this.size) {
      this.first = newNode
      this.last = newNode
    } else {
      let temp = this.first
      this.first = newNode
      newNode.next = temp
    }
    return ++this.size
  }

  pop() {
    if (!this.size) return null
    let temp = this.first
    // if (this.size === 1) {
    //   this.first = null
    //   this.last = null
    // } else {
    //   this.first = this.first.next
    //   this.size--
    // }

    // Sneakier method
    if (this.first === this.last) {
      this.last = null
    }
    this.first = this.first.next
    this.size--
    return temp.value
  }
}

let stackLinkedList = new Stack()
console.log(stackLinkedList.push(3))
console.log(stackLinkedList.push(23))
console.log(stackLinkedList.push(230))
console.log(stackLinkedList)
console.log(stackLinkedList.pop())
console.log(stackLinkedList.pop())
console.log(stackLinkedList.pop())
console.log(stackLinkedList.pop())
console.log(stackLinkedList.pop())
console.log(stackLinkedList)


