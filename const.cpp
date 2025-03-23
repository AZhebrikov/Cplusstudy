#include<iostream>

int main(){

	int x = 5;
	int y = 6;
	int* p = &x;
	
	const int* pc = p;//константный инт, лежащий под указателем
	pc = &y;
	*pc = y; // CE

	int* const cp = p;//константный указатель
	cp = &y; // CE
	*cp = y;

	const int* t = p; //int* -> const int*
	int* t2 = t; // CE

	int z = 2;
	const int* pz = &z;
	++z;//ok

}
