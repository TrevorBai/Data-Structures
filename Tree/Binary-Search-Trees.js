// **************************************************
//       Binary Search Trees
// **************************************************

class Node {
  constructor(value) {
    this.value = value
    this.left = null
    this.right = null
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null
  }

  insert(value) {
    let newNode = new Node(value)
    if (!this.root) {
      this.root = newNode
      return this
    }
    let current = this.root
    while (true) {
      if (value === current.value) return undefined
      if (value < current.value) {
        if (!current.left) {
          current.left = newNode
          return this
        }
        current = current.left
        continue
      }
      if (!current.right) {
        current.right = newNode
        return this
      }
      current = current.right
    }
  }

  // Return the node if found
  find(value) {
    if (!this.root) return false
    let current = this.root
    let found = false
    while (current && !found) {
      if (value === current.value) {
        found = true
        continue
      }
      if (value < current.value) {
        current = current.left
        continue
      }
      current = current.right
    }
    if (!current) current = undefined
    return current
  }

  // Return a boolean if found
  contains(value) {
    if (!this.root) return false
    let current = this.root
    let found = false
    while (current && !found) {
      if (value === current.value) return true
      if (value < current.value) {
        current = current.left
        continue
      }
      current = current.right
    }
    return found
  }
}

let tree = new BinarySearchTree()
// tree.root = new Node(10)
// tree.root.left = new Node(7)
// tree.root.right = new Node(15)
// tree.root.left.right = new Node(9)

tree.insert(10)
tree.insert(5)
tree.insert(13)
tree.insert(11)
tree.insert(2)
tree.insert(16)
tree.insert(7)
tree.insert(3)
// console.log(tree.insert(10))
// console.log(tree.insert(7))

// console.log(tree)
// console.log(tree.root.left)
// console.log(tree.root.right)

console.log(tree.find(3))
console.log(tree.find(300))
console.log(tree.contains(17))
console.log(tree.contains(300))
