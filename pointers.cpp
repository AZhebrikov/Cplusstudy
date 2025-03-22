#include<iostream>
#include<vector>

int main(){
    int x = 0;
    int* px = &x;//& : T -> T* Address

    std::cout << &x << '\n';
    std::cout << *px << '\n'; //*: T* -> T Dereference
    
    (px+1); // +: (T*, int) -> T*
    
    std::vector<int> v = {1,2,3,4,5};
    int* pv = &v[0];

    std::cout << *pv << '\n';
    std::cout << *++pv << '\n';

}
