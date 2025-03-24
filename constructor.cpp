#include<iostream>
#include<cstring>

class String{
	char* arr = nullptr;
	size_t sz = 0;
	size_t cap = 0;
public:
	//String(){} - default constructor
	// если в классе будет реализован хоть один конструктор, то компилятор не 
	// будет создавать конструктор по умолчанию, поэтому мы его явно написали.
	// Однако мы можем попросить конструктор это сделать.
	String() = default;
	// явно объявленный и неявно определенный

	String(size_t n, char c): arr(new char[n+1]), sz(n), cap(n+1){
		std::memset(arr, c, n);
		arr[sz] = '\0';
		std::cout << 1 << '\n';
	}
	
};

int main(){

	String v; //default initialization
	
}

