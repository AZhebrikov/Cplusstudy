#include<iostream>
#include<vector>

int main(){
    
	int* a = new int[100];
	delete[] a; 

	std::vector<int> v(10);
	delete &v[0];
}

