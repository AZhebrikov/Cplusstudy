#include<iostream>
#include<algorithm>

bool cmp(int x, int y){
	return x > y;
}

int main(){
	
	int a[5] = {5, 3, 7, 1, 0};

	bool (*p)(int, int) = cmp; //Function to pointer conversion
	std::cout << (void*)p << '\n';

	std::sort(a, a + 5, &cmp);

	for( int i = 0; i < 5; ++i){
		std::cout << a[i];
	}
}
