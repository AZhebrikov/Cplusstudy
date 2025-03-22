#include<iostream>

void f(int* a){
	std::cout << "hi" << '\n';
}

/*
 void f(int a[3]){
	std::cout << "hii" << '\n';
} no, this redifinition
*/

int main(){
    
    int a[5]{};
    a[1] = 1;

    for(int i = 0; i < 5 ;++i){
	    std::cout << a[i];
    }

    std::cout << *a << '\n';
    std::cout << *(a + 3) << '\n'; //array to pointer convertion

    int* p = a + 3;
    std::cout << p[-1] << '\n'; //Ok, equivalent to *(p-1)

    //a[2] == *(a + 2)
    std::cout << a[2] << ' ' << 2[a] << '\n';

    // a != int*
    // ++a , no, this error

    std::cout << sizeof(a) << ' ' << sizeof(p) << '\n';
}

