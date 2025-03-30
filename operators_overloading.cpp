#include "iostream"
#include <condition_variable>

struct Complex {
    double re = 0.0;
    double im = 0.0;

    Complex(double re): re(re) {}
    Complex(double re, double im): re(re), im(im) {}

    Complex& operator=(const Complex& other) & {
        re = other.re;
        im = other.im;
        return *this;
    }
    
    Complex& operator+=(const Complex& other) {
        re += other.re;
        im += other.im;
        return *this;
    }
};

//version 1
Complex operator+(const Complex& a, const Complex& b) {
    Complex result = a;
    result += b;
    return result;
}

//version 2
//Complex operator+(const Complex& a, const Complex& b) {
//    Complex result = a;
//    return result += b;
//}

//version 3
//Complex operator+(Complex a, const Complex& b) {
//    result a += b;
// }

//Эти версии кажуться более лаконичными и правильными, однако они будут работать медленнее, 
//так как для них, в отличии от нашего случая, компилятор умеет проводить return value optimization.
//Такую оптимизацию он умеет делать только в случае, когда возвращается просто локальное значение, созданное внутри функции и не
//окруженное  expression. Он обойдется без копирования, сразу сохраняя данные не за концом стека а в
// нужную переменную.
int main() {

}
    