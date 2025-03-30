#include "iostream"

enum E {
    White,
    Cgay,
    Black
};// по сути это именованные константы, вносятся в глобальную область видимости и преобразуются к int.

enum class Ec : int8_t {//указываем, в каком типе мы хотим его хранить.
    White = 2,
    Gray, //3
    Black //4
};

int main() {

    E e = White;
    std::cout << e << '\n';

    Ec ec = Ec::White;
    std::cout << static_cast<int>(ec) << '\n';
}
    