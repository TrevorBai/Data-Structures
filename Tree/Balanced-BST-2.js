class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class Height {
  constructor() {
    this.height = 0;
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
      } else {
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
          } else if (value > current.value) {
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
            return 'duplicate!';
          }
        }
      }
    } else return 'Please insert a number';
  }
  isBalancedRecursion(node, height) {
    if (!node) {
      height.height = 0;
      return true;
    }
    const leftHeight = new Height();
    const rightHeight = new Height();

    const isLeftTreeBalanced = this.isBalancedRecursion(node.left, leftHeight);
    // Cut the execution early
    if (!isLeftTreeBalanced) return false;
    const isRightTreeBalanced = this.isBalancedRecursion(
      node.right,
      rightHeight
    );
    // Cut the execution early
    if (!isRightTreeBalanced) return false;

    const leftTreeHeight = leftHeight.height;
    const rightTreeHeight = rightHeight.height;

    // Height of current node is max of heights of left and right subtrees plus 1
    height.height = Math.max(leftTreeHeight, rightTreeHeight) + 1;

    // If diff between heights of left and right subtrees is more than 2, this node is not balanced
    if (Math.abs(leftTreeHeight - rightTreeHeight) >= 2) return false;

    // This node is balanced BUT it doesn't guarantee its direct subtrees are balanced as well
    // return isLeftTreeBalanced && isRightTreeBalanced;
    return true;
  }
  isBalanced() {
    let current = this.root;
    let height = new Height();
    if (!current) return true;
    return this.isBalancedRecursion(current, height);
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
