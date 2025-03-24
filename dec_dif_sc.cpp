#include<iostream>

int a; //global scope

//declaration
void f(int x);
class S;
struct U;


namespace N {
    int x;
}

namespace N {
    int y;
}

using namespace N; //Принесение всего содержимого пространства имен N, плохой стиль.
using N::x;//Принесение конкретной функции из пространства имен, нормально.

int main(){
    using vi = std::vector<int>; // это не объявление нового типа, а просто алиас для него.
    // Преимущество по сравнению с typedef  с тем, что using более умная функция, и он 
    // более читабельный.
}
