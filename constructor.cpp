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

	String(size_t n, char c): String(n) {
		std::memset(arr, c, n);
	}

	String(const String& other): String(other.sz) {
		std::memcpy(arr, other.arr, sz + 1);
	}

	String& operator=(const String& other) {
		String copy = other;
		swap(copy);
		return *this;
	}

	/*
	Можно выше описанный оператор переписать в еще более коротком варианте:
	String& operator=(const String other){
		swap(other);
		return *this;

	В такой реализации мы учли и случай, когда присваиваем себя себе.
	*/

	void swap(String& other) {
		std::swap(arr, other.arr);
		std::swap(sz, other.sz);
		std::swap(cap, other.cap);
	}	

	~String(){
		delete[] arr;
	}
};


int main(){

	String s(2,'a');
	String s2 = s;
}
