#include<iostream>

int main(){

	// int &x; нельзя создать не проинициализированную ссылку
	// int& = 5; нельзя взять ссылку на временный обЪект
	// 
	// int x = 5;
	// int& y = x++; error
	
	int x = 5;
	int& y = ++x;
}

