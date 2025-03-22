#include<iostream>

void f(){
    int* p = new int(5);
    std::cout << p << '\n';
    //delete p
} 

int main(){
    while(true){
         f();
    }
}


