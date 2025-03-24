#include<iostream>

class C{ 
	int x{5};
public:
	void f(int y){
		std::cout << x + y;
	}

	friend void g(C, int);
	// Забавный момент, написав friend мы можем написать следом и определение функции, однако это будет не метод, 
	// а внешняя функция, поэтому ее же повторение вне блока будет redifinition.
	friend class CC;
};

void g(C c, int y){
	std::cout << c.x + y + 1 << '\n';
}

int main(){
	C c;
	g(c,2); //без friend не получится, так как х является приватной переменной.
}
