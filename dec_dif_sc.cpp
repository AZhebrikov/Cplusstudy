#include<iostream>

namespace N{
    int x = 0;
}

namespace NN{
    int x = 1;
}

int main(){
    // using N::x;
    // int x = 1; Ошибка с повторным объявлением.

    using namespace N;
    using namespace NN;

    std::cout << x ;
}
