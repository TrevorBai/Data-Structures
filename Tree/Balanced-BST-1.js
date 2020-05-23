class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }
  insert(value) {
    // only accept numbers....watch out since NaN is typeof number!
    if (typeof value === 'number' && !isNaN(value)) {
      // if there is nothing in the tree, start it off with a new node!
      if (this.root === null) {
        this.root = new Node(value);
        return this;
      }
      else {
        // current variable used for traversal, just like linked lists!
        var current = this.root;
        // keep looping till we get to the correct spot;
        while (true) {
          if (value < current.value) {
            // if there is nothing on the left
            if (current.left === null) {
              // make a new node and get out
              current.left = new Node(value);
              return this;
            }
            // otherwise, keep moving on!

            else {
              current = current.left;
            }
          }
          else if (value > current.value) {
            // if there is nothing on the right
            if (current.right === null) {
              // make a new node and get out
              current.right = new Node(value);
              return this;
            } else {
              current = current.right;
            }
          }
          // otherwise it must be a duplicate so let's get out of here

          else {
            return "duplicate!";
          }
        }
      }
    }
    else
      return "Please insert a number";
  }
  height(node) {  // O(N)
    if (!node) return -1;
    return Math.max(this.height(node.left), this.height(node.right)) + 1;
  }
  isBalancedRecursion(node) {
    if (!node) return true;
    const leftHeight = this.height(node.left);
    const rightHeight = this.height(node.right);
    if (Math.abs(leftHeight - rightHeight) <= 1 &&
      this.isBalancedRecursion(node.left) &&
      this.isBalancedRecursion(node.right)) {
      return true;
    }
    return false;
  };
  isBalanced() {
    let current = this.root;
    if (!current) return true;
    return this.isBalancedRecursion(current);
  }
}

const binarySearchTree = new BinarySearchTree();
binarySearchTree.insert(15);
binarySearchTree.insert(20);
binarySearchTree.insert(10);
binarySearchTree.insert(12);
console.log(binarySearchTree.isBalanced());
// console.log(binarySearchTree.root.right.right.value);
// console.log(binarySearchTree.root.right.right.right.left.left.value);

// binarySearchTree.insert(5);
// console.log(binarySearchTree.isBalanced());
// binarySearchTree.insert(6);
// console.log(binarySearchTree.isBalanced());
// binarySearchTree.insert(7);
// console.log(binarySearchTree.isBalanced());
