// **************************************************
//       Dynamic Programming
// **************************************************

// **************************************************
//       Top Down Approach
// **************************************************
// Memoization Strategy
// Time Complexity O(N)
// Space Complexity of memoization is worse compared to Tabulation Strategy
// One memo-ized Fibobacci Squence solution
/**
 * @param {number} n
 * @param {number[]} memo
 */
function fib(n, memo = []) {
  if (memo[n] !== undefined) return memo[n];
  if (n <= 2) return 1;
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  // console.log('memo[n] :>> ', memo[n]);
  // console.log('memo :>> ', memo);
  return memo[n];
}

// Slightly different version
/**
 * @param {number} n
 * @param {number[]} memo
 */
function fibAnother(n, memo = [undefined, 1, 1]) {
  if (memo[n] !== undefined) return memo[n];
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  // console.log('memo[n] :>> ', memo[n]);
  // console.log('memo :>> ', memo);
  return memo[n];
}


// console.log(fibAnother(7));



// **************************************************
//       Bottom Up Approach
// **************************************************
// Tabulation Strategy
// Time Complexity O(N)
/**
 * @param {number} n
 */
function fibTabulation(n) {
  if (n <= 2) return 1;
  const fibNums = [0, 1, 1];  // table
  for (let i = 3; i <= n; i++) {
    fibNums[i] = fibNums[i - 1] + fibNums[i - 2];
  }
  return fibNums[n];
}

console.log(fibTabulation(7));
