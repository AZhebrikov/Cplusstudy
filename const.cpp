#include<iostream>

int main(){

	const int* p = new const int[10]; // CE, так как не проинициализировали данные.
	
	int* p = new const int[10]{} // CE, нельзя так как забывается константность.
}
