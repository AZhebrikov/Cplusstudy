#include<iostream>
#include<cstring>

class String{
	char* arr = nullptr;
	size_t sz = 0;
	size_t cap = 0;
public:
	String(){} //default constructor
	
	String(size_t n, char c): arr(new char[n+1]), sz(n), cap(n+1){
		std::memset(arr, c, n);
		arr[sz] = '\0';
		std::cout << 1 << '\n';
	}// Пример нетривиального конструктора.
	
	String(std::initializer_list<char> list)
			: arr(new char[list.size() + 1])
			, sz(list.size())
			, cap(sz + 1) {
	 	std::copy(list.begin(), list.end(), arr);
		arr[sz]='\0';
		std::cout << 2 << '\n';
	}
};

int main(){

	String v; //default initialization
	
	String s1{2, 'a'};
	String s2{'a', 'b', 'c', 'd', 'f'};
}

