#include<iostream>
#include<algorithm>

void f(int){}
void f(double){}

int main(){

	void (*p1)(int) = f;
	void (*p2)(double) = f;

	std::cout << (void*)p1 << ' ' << (void*)p2 << '\n';
}
