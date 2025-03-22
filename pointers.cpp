#include<iostream>
#include<vector>

void swap(int* x, int* y){
	int t = *x;
	*x = *y;
	*y = t;
}

int main(){
    int a = 0;
    int* p = &a;
    {
         int b = 2;
	 p = &b;
    }

    std::cout << p << '\n';
    std::cout << *p << '\n'; // UB, but must likely 2

    int x = 0;
    int y = 1;
    
    swap(&x, &y);
    std::cout << x << '\n';
    std::cout << y << '\n';

}
