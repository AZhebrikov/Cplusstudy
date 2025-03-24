#include<iostream>

// One Definition Rule (ODR)
void f(int x);
void f(int x);
void f(int x);
//but one
void f(int x){}
// Нужно для перекрестных функций 

void f(){}// перегрузка функций 


void fun(int x){}
void fun(float x){}


int main(){
    fun(1.3)//CE так как конвертация double одинаково плоха как в float и int 
}


