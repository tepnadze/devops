#include <iostream>


int add(int a ,int b){
    std::cout << a+b;
    return a+b;
}

int sub (int a , int b){
    std::cout << a-b;
    return a+b;
}

int main(){

    add(2,3);
    sub(3,2);
    
    return 0;
}