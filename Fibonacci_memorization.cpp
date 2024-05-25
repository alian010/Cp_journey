unordered_map<int, int> memo;

int fibonacci(int n) {

if (n <= 1) {

return n;

}

if (memo.find(n) != memo.end()) {

return memo[n];

}

int fib = fibonacci(n-1) + fibonacci(n-2);

memo[n] = fib;

return fib;

}
