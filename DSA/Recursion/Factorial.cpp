#include <iostream>


int fac(int n);

int main(){
    int a = fac(10);
    std::cout << a << std::endl;
    return 0;
}

int fac(int n){
    if(n == 1){
        return 1;
    }

    return n * fac(n-1);
}