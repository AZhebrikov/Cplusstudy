#include<iostream>

int main(){

	int x = 5;
	const int& r = x;
	++x; // Ok
	
	r = 5;//CE
	++r; //CE
	
	int& const cr = x; //CE, так как ссылка по природе неизменна.
	
	int& r2 = r;//CE

	const int y = 0;
	int& y2 = y;//CE
	// const потерять нельзя нигде по дороге.

}
