#include<iostream>

int& f(int& x){
	return x++;
}//error

int& g(int x){
	int& y = x;
	return y;
}//error

int& h(){
	static int y = 0;
	return y;
}//ok

int& t(){
	int* p = new int(1);
	return *p;
}//ok

int main(){
	int x = 0;
	int& y = f(x);
	int& yy = g(x);
	int& yyy = h();

	int& yyyy = t();
	delete &yyyy;
	//ok
	
	int yyyyy = t();
	delete &yyyyy;
	// seg. fault error
}
