#include<iostream>
#include<cstring>

class String{
	char* arr = nullptr;
	size_t sz = 0;
	size_t cap = 0;
public:
	String() = default;

	String(size_t n, char c): arr(new char[n+1]), sz(n), cap(n+1){
		std::memset(arr, c, n);
		arr[sz] = '\0';
		std::cout << 1 << '\n';
	}

	// String( String& other); - так тоже можно!
	// String( String other); - CE, что логично, ведь чтобы нам взять строку по значению,
	// нам и нужен конструктор копирования. 
	//
	// Заметим, что компилятор создаст конструктор копирования по умолчанию, даже если у вас есть 
	// какой-то из обычных конструкторов. Конструктор копирования по умолчанию будет просто
	// копировать поля. Поэтому если вам нужен будет не тривиальный конструктор, его обязательно
	// нужно написать.
	String(const String& other)
			: arr(new char[other.cap])
			, sz(other.sz)
			, cap(other.cap) { //copy construction
	
		std:memcpy(arr, other.arr, sz + 1);
	}

	// String(String&) = default; можем попросить создать такой конструктор по умолчанию,
	// так как компилятор увидел бы, что уже был создан конструктор для const&, и не стал бы сам
	// его создавать. В данном примере это приведет к double free error.

	//идиома COW string Copy-on-Write
	//Ленивое копирование, идея состоит в том, что мы делаем тривиальное копирование и запоминаем
	//флажок, что мы копия, а вот когда на объектом захотят провести его изменяющую манипуляцию, 
	//вот тогда и будет создан объект копия.

	~String(){
		delete[] arr;
	}
};

int main(){

	String s(2,'a');
	String s2 = s; // Copy constructor
}
