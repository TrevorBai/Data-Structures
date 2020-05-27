class Trie {
  constructor() {
    this.characters = {};
    this.isWord = false;
  }
  addWord(word, index = 0) {
    if (index === word.length) {
      this.isWord = true;
    } else {
      const char = word[index];
      const subTrie = this.characters[char] || new Trie();
      // Recursive add next char of the word
      subTrie.addWord(word, index + 1);
      this.characters[char] = subTrie;
    }
  }
  findWord(word, index = 0) {
    const char = word[index];
    if (index < word.length - 1 && this.characters[char]) {
      return this.characters[char].findWord(word, index + 1);
    } else {
      return this.characters[char];
    }
  }
  getWords(words = [], currentWord = '') {
    if (this.isWord) words.push(currentWord);
    for (let char in this.characters) {
      const newWord = currentWord + char;
      this.characters[char].getWords(words, newWord);
    }
    return words;
  }
  autoComplete(prefix) {
    let words = this.getWords();
    for (let charIdx in prefix) {
      words = words.filter((word) => word[charIdx] === prefix[charIdx]);
    }
    return words;
  }
  removeWord(word) {
    let prefix = '';
    let garbageCollect = false;
    for (let char of word) {
      prefix += char;
      const exclusiveArr = this.autoComplete(prefix);
      // console.log('exclusiveArr :>> ', exclusiveArr);
      if (exclusiveArr.length === 1) {
        garbageCollect = true;
        break;
      }
    }
    if (garbageCollect) {
      // console.log('prefix :>> ', prefix.slice(0, -1));
      const newPrefix = prefix.slice(0, -1);
      const nodePrefix = this.findWord(newPrefix);
      // console.log('nodePrefix :>> ', nodePrefix);
      const deletedKey = prefix.slice(-1);
      delete nodePrefix.characters[deletedKey];
      // console.log('nodePrefix :>> ', nodePrefix);
    } else {
      this.findWord(word).isWord = false;
    }
  }
}

// const firstTrie = new Trie();
// firstTrie.addWord('fun');
// console.log(firstTrie.characters);  // {f: Trie}
// console.log(!!firstTrie.characters['f']);  // true
// console.log(firstTrie.characters.f.characters.u);  // {u: Trie}
// console.log(!!firstTrie.characters.f.characters.u);  // true

// console.log(firstTrie.characters.f.characters.u.characters.n.isWord);  // true
// console.log(!!firstTrie.characters.f.characters.u.characters.n);  // true
// console.log(firstTrie.characters.f.characters.u.characters.n.characters);  // {}

// console.log(!!firstTrie.characters.f.characters.u.characters.l);  // false

// const secondTrie = new Trie();
// secondTrie.addWord('ha');
// secondTrie.addWord('hat');
// secondTrie.addWord('has');
// secondTrie.addWord('have');
// secondTrie.addWord('hate');
// console.log(secondTrie.characters.h.characters.a.isWord); // true
// console.log(secondTrie.characters.h.characters.a.characters.t.isWord); // true
// console.log(secondTrie.characters.h.characters.a.characters.v.isWord); // false
// console.log(secondTrie.characters.h.characters.a.characters.v.characters.e.isWord); // true
// console.log(secondTrie.characters.h.characters.a.characters.t.characters.e.isWord); // true
// console.log(Object.keys(secondTrie.characters.h.characters.a.characters).length); // 3

const t = new Trie();
t.addWord('fun');
t.addWord('fast');
t.addWord('fat');
t.addWord('fate');
t.addWord('father');
t.addWord('forget');
t.addWord('awesome');
t.addWord('argue');

t.removeWord('fat');
console.log(t.characters.f.characters.a.characters.t.isWord);  // false
console.log(t.characters.f.characters.a.characters.t.characters.e.isWord);  // true
t.removeWord('argue');
console.log(t.characters.a.characters.r);  // undefined
// console.log(t.findWord('taco'));
// console.log(t.findWord('fat'));
// console.log(t.autoComplete('fa'));
// console.log(t.autoComplete('a'));
// console.log(t.autoComplete('arz'));
