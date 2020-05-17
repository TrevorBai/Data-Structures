// **************************************************
//       Hash Functions
// **************************************************

// not legitimate, O(n) time complexity, data distribution is not quite evenly
/**
 * @param {any} key
 * @param {number} arrayLen
 */
const hash = (key, arrayLen) => {
  let total = 0;
  for (let char of key) {
    // map 'a' to 1, 'b' to 2, 'c' to 3, etc.
    // charCodeAt only works on strings
    let value = char.charCodeAt(0) - 96;
    total = (total + value) % arrayLen; // A little tricky, I would do the mod at the end
  }
  return total;
};

// console.log(hash('pink', 10)); // 0
// console.log(hash('orange', 10)); // 0
// console.log(hash('blue', 10)); // 0
// console.log(hash('orangered', 10)); // 7
// console.log(hash('cyan', 10)); // 3
// console.log(hash('purple', 10)); // 8
// console.log(hash('maroon', 10)); // 6

// Revision one
/**
 * @param {string | any[]} key
 * @param {number} arrayLen
 */
const hashRevOne = (key, arrayLen) => {
  let total = 0;
  let WEIRD_PRIME = 31; // It will significantly decrease data collision
  for (let i = 0; i < Math.min(key.length, 100); i++) {
    let char = key[i];
    // charCodeAt only works on strings
    let value = char.charCodeAt(0) - 96;
    total = (total * WEIRD_PRIME + value) % arrayLen; // A little tricky, I would do the mod at the end
  }
  return total;
};

console.log(hashRevOne('pink', 13)); // 5
console.log(hashRevOne('orange', 13)); // 10
console.log(hashRevOne('blue', 13)); // 10
console.log(hashRevOne('orangered', 13)); // 0
console.log(hashRevOne('cyan', 13)); // 5
console.log(hashRevOne('purple', 13)); // 8
console.log(hashRevOne('maroon', 13)); // 11

// **************************************************
//       Hash Tables
// **************************************************
class HashTable {
  constructor(size = 53) {
    this.keyMap = new Array(size);
  }

  /**
   * @param {string | any[]} key
   */
  _hash(key) {
    // _ means it is supposed to be a private method even it is not.
    let total = 0;
    let WEIRD_PRIME = 31;
    for (let i = 0; i < Math.min(key.length, 100); i++) {
      let char = key[i];
      let value = char.charCodeAt(0) - 96;
      total = (total * WEIRD_PRIME + value) % this.keyMap.length;
    }
    return total;
  }

  /**
   * @param {string | any[]} key
   * @param {any} value
   */
  set(key, value) {
    let index = this._hash(key);
    if (!this.keyMap[index]) {
      this.keyMap[index] = [];
    }
    this.keyMap[index].push([key, value]);
  }

  /**
   * @param {string | any[]} key
   */
  get(key) {
    let index = this._hash(key);
    if (this.keyMap[index]) {
      for (let i = 0; i < this.keyMap[index].length; i++) {
        if (this.keyMap[index][i][0] === key) {
          return this.keyMap[index][i][1];
        }
      }
    }
    return undefined;
  }

  values() {
    let valuesArr = [];
    for (let i = 0; i < this.keyMap.length; i++) {
      if (this.keyMap[i]) {
        for (let j = 0; j < this.keyMap[i].length; j++) {
          if (!valuesArr.includes(this.keyMap[i][j][1])) {
            valuesArr.push(this.keyMap[i][j][1]);
          }
        }
      }
    }
    return valuesArr;
  }

  keys() {
    let keysArr = [];
    for (let i = 0; i < this.keyMap.length; i++) {
      if (this.keyMap[i]) {
        for (let j = 0; j < this.keyMap[i].length; j++) {
          if (!keysArr.includes(this.keyMap[i][j][0])) {
            keysArr.push(this.keyMap[i][j][0]);
          }
        }
      }
    }
    return keysArr;
  }
}
