// **************************************************
//       Singly Linked Lists
// **************************************************

// piece of data - val
// reference to next node - next

class Node {
  constructor(val) {
    this.val = val
    this.next = null
  }
}

class SinglyLinkedList {
  constructor() {
    this.head = null
    this.tail = null
    this.length = 0
  }

  push(val) {
    let newNode = new Node(val)
    if (!this.head) {
      // the head and the tail point to the same node, Node is reference type
      // So if the tail changes, the head changes as well
      this.head = newNode
      this.tail = newNode
    } else {
      this.tail.next = newNode  // the head.next changes as well for the first time
      this.tail = newNode
    }
    this.length++
    return this
  }

  // traverse() {
  //   let current = this.head
  //   while (current) {
  //     console.log(current.val)
  //     current = current.next
  //   }
  // }

  pop() {
    if (!this.head) return undefined
    let current = this.head
    let newTail = this.head
    while (current.next) {
      newTail = current
      current = current.next
    }
    this.tail = newTail
    this.tail.next = null
    this.length--
    if (!this.length) {
      this.head = null
      this.tail = null
    }
    return current
  }

  shift() {
    if (!this.head) return undefined
    const currentHead = this.head
    this.head = this.head.next
    this.length--
    if (!this.length) this.tail = null
    return currentHead
  }

  unshift(val) {
    let newNode = new Node(val)
    if (!this.head) {
      this.head = newNode
      this.tail = newNode
    } else {
      newNode.next = this.head
      this.head = newNode
    }
    this.length++
    return this
  }

  get(index) {
    if (index < 0 || index >= this.length) return null
    let count = 0
    let current = this.head
    // while (current) {
    //   if (count === index) return current.val
    //   count++
    //   current = current.next
    // }
    while (count !== index) {
      count++
      current = current.next
    }
    return current
  }

  set(index, val) {
    const foundNode = this.get(index)
    if (!foundNode) return false
    foundNode.val = val
    return true
  }

  insert(index, val) {
    if (index < 0 || index > this.length) return false
    if (index === this.length) return !!this.push(val)
    if (index === 0) return !!this.unshift(val)
    let newNode = new Node(val)
    let prev = this.get(index - 1)
    let temp = prev.next
    prev.next = newNode
    newNode.next = temp
    this.length++
    return true
  }

  remove(index) {
    if (index < 0 || index >= this.length) return undefined
    if (index === this.length - 1) return this.pop()
    if (index === 0) return this.shift()
    let removed = this.get(index)
    this.get(index - 1).next = this.get(index + 1)
    this.length--
    return removed
  }

  reverse() {
    let node = this.head
    this.head = this.tail
    this.tail = node

    let next
    let prev = null
    for (let i = 0; i < this.length; i++) {
      next = node.next
      node.next = prev
      prev = node
      node = next
    }
    return this
  }

  print() {
    let arr = []
    let current = this.head
    while (current) {
      arr.push(current.val)
      current = current.next
    }
    console.log(arr)
  }

}

let list = new SinglyLinkedList()
list.push('HELLO')
list.push('GOODBYE')
list.push('Serious?')
// console.log(list)
// console.log(list.head)
// console.log(list.head.next)
// list.traverse()
// console.log(list.pop())
// console.log(list)
// console.log(list.pop())
// console.log(list)
// console.log(list.pop())
// console.log(list)
// console.log(list.pop())
// console.log(list)
// console.log(list.shift())
// console.log(list)
// console.log(list.shift())
// console.log(list)
// console.log(list.shift())
// console.log(list)
// console.log(list.shift())
// list.unshift('First')
// console.log(list.pop())
// console.log(list.get(2))
// console.log(list.set(1, 'haha'))
// console.log(list.insert(0, 'haha'))
// console.log(list.remove(100))
// console.log(list)
list.print()
list.reverse()
list.print()
console.log(list.head)
console.log(list.tail)