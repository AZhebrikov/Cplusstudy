#include<iostream>

int main(){
    int* p = new int;
    int a = 0;

    std::cout << &a << '\n';
    std::cout << p << '\n';

    int* pa = new int[1000];
    delete[] pa;
    delete p;
}

