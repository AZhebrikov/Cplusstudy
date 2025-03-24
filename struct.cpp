#include<iostream>

struct S {

	int x;
	double y;

	//Inner class
	struct SS {
		char x;
	};
	// А какой размер имеет структура S(без А)? На самом деле размер структуры S по прежнему остался равен 16, так как никаких полей мы не добавили.
	
	struct A {
		int y
	} a; // А вот это уже структура будет добавлена в поле.
};

int main(){
	S s;
	S::SS ss;

	//Local class
	struct B{
		int x = 1;
		int y = 2;
	};

	B s;
}
