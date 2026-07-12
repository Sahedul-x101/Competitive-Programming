#include <iostream>

void name(int n);
void num(int n, int i);
void revNum(int n);

int main(){
    int n;
    std::cin >> n;

    name(n);
    int i=1;
    num(n,i);
    std::cout << std::endl;
    revNum(n);
    std::cout << std::endl;

    return 0;
}

void name(int n){
    if(n==0){
        return;
    }
    else{
        std::cout << "Sahedul" << std::endl;
    }
    name(n-1);
}

void num(int n, int i){
    if(i>n){
        return;
    }else{
        std::cout << i << " ";
        i++;
    }
    num(n,i);
}

void revNum(int n){

    std::cout << n << " ";
    if(n==1){
        return;
    }

    revNum(n-1);
}