#include<iostream>
#include<vector>

void f(int**){}
void f(int(*)[5]){}
void f(int* [5]){}
// 1 and 3 equivalent -> redifinition error

int main(){

    int* b[5]; //array of 5 pointers to int	

    int (*c)[5]; //Pointer to array of 5 ints
}

