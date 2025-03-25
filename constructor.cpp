#include<iostream>
#include<cstring>

class String{
	char* arr = nullptr;
	size_t sz = 0;
	size_t cap = 0;
	
	String(size_t n): arr(new char[n+1]), sz(n), cap(n+1) {
		arr[sz] = '\0';
	}

public:
	String() = default;

	// Можем вместо default написать delete, тем самым запретить вызывать конструктор с таким
	// типом. Не произойдет никакой неявной конвертации, а сразу будет СЕ.

	String(size_t n, char c): String(n) {
		std::memset(arr, c, n);
	}

	String(const String& other): String(other.sz) {
		std::memcpy(arr, other.arr, sz + 1);
	}

	~String(){
		delete[] arr;
	}
};

int main(){

	String s(2,'a');
	String s2 = s;
}
