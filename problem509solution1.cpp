class Solution {
public:
    int fib(int n) {
         if (n <= 1){
        return n;
    }
//time complexity= o(2^n)  space complexity= o(n)
    // Recursive case: sum of the two preceding Fibonacci numbers
    return fib(n - 1) + fib(n - 2);



    }
};