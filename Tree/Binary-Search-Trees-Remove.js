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
    if (this.root === null) {
      this.root = new Node(value);
      return this;
    } else {
      var current = this.root;
      while (true) {
        if (value < current.value) {
          if (current.left === null) {
            current.left = new Node(value);
            return this;
          } else {
            current = current.left;
          }
        } else if (value > current.value) {
          if (current.right === null) {
            current.right = new Node(value);
            return this;
          } else {
            current = current.right;
          }
        }
      }
    }
  }
  find(value) {
    if (!this.root) return undefined;
    let current = this.root;
    while (current) {
      if (value === current.value) {
        return current;
      }
      if (value < current.value) {
        current = current.left;
        continue;
      }
      current = current.right;
    }
    return undefined;
  }
  findMin(node) {
    if (!node) return undefined;
    let current = node;
    while (current.left) {
      current = current.left;
    }
    return current;
  }
  findParent(val) {
    if (!this.root) return undefined;
    let current = this.root;
    if (this.root.value === val) return null;
    while (current.left || current.right) {
      if ((current.left && current.left.value === val) || (current.right && current.right.value === val)) return current;
      if (val < current.value) {
        current = current.left;
        continue;
      }
      current = current.right;
    }
    return -1;
  }
  remove(val) {
    let node = this.find(val);
    if (!node) return undefined;
    let parentNode = this.findParent(val);
    // Case 1: No children
    const temp = node;
    if (!node.left && !node.right) {
      if (!parentNode) return this.root;
      if (parentNode.value > val) {
        parentNode.left = null;
      } else {
        parentNode.right = null;
      }
    }
    // Case 2: One child
    else if (node.left === null) {
      if (!parentNode) {
        this.root.right = null;
        return this.root;
      }
      if (parentNode.value > val) {
        parentNode.left = node.right;
      } else {
        parentNode.right = node.right;
      }
      temp.right = null;
    }
    else if (node.right === null) {
      if (!parentNode) {
        this.root.left = null;
        return this.root;
      }
      if (parentNode.value > val) {
        parentNode.left = node.left;
      } else {
        parentNode.right = node.left;
      }
      temp.left = null;
    }
    // Case 3: Two Children
    else {
      const returnedNode = new Node(val);
      const minNode = this.findMin(node.right);
      const tempValue = minNode.value;
      this.remove(minNode.value);
      node.value = tempValue;
      return returnedNode;
    }
    return temp;
  }
}

const binarySearchTree = new BinarySearchTree();
// binarySearchTree.insert(15).insert(20).insert(10).insert(12).insert(1).insert(5).insert(50).insert(60).insert(30).insert(25).insert(23).insert(24).insert(70);
// console.log(binarySearchTree.remove(50));
// console.log(binarySearchTree.root.right.value);
// console.log(binarySearchTree.root.right.right);

// console.log(binarySearchTree.remove(10));
// console.log(binarySearchTree.root.left.value);
// console.log(binarySearchTree.root.left.left.value);
// console.log(binarySearchTree.root.left.left.right.value);

// console.log(binarySearchTree.remove(50));
// console.log(binarySearchTree.root.right.value);
// console.log(binarySearchTree.root.right.right.value);
// console.log(binarySearchTree.root.right.right.left.value);

// console.log(binarySearchTree.remove(1));
// console.log(binarySearchTree.root.left.left.value);
// console.log(binarySearchTree.root.left.left.left);
// console.log(binarySearchTree.root.left.left.right);

// console.log(binarySearchTree.remove(20));
// console.log(binarySearchTree.root.right.value);
// console.log(binarySearchTree.root.right.right);
// console.log(binarySearchTree.root.right.left);


binarySearchTree.insert(22).insert(49).insert(85).insert(66).insert(95).insert(90).insert(100).insert(88).insert(93).insert(89);
console.log(binarySearchTree.remove(85));
console.log(binarySearchTree.root.right.right.value);
console.log(binarySearchTree.root.right.right.right.left.left.value);