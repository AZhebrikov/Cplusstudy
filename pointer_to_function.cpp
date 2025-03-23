#include<iostream>
#include<algorithm>

int main(){

	void (*pf)(int); // pointer to function which takes int, returns void
	void (* pfa[10])(int); //arrays of 10 pointers to function which takes int, returns void

	void (*(*pff[10])(int))(int); // arrays of 10 pointers to function which takes int, returns pointer to function, which takes int, returns void
}
