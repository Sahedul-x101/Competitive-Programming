#include <bits/stdc++.h>

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main(){

    int n;
    std::cin >> n;
    int a = fib(n);

    std::cout << a << std::endl;

    return 0;
}

/*
Recursion -- Problem
F=3 where F(1) = 1 && F(0) = 0

        F(3)
      /      \
    F(2)     F(1)
   /   \
 F(1) F(0)


*/
