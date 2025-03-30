#include "iostream"
#include <condition_variable>

struct Complex {
    double re = 0.0;
    double im = 0.0;

    Complex(double re): re(re) {}
    Complex(double re, double im): re(re), im(im) {}

    //version 2
    Complex& operator+=(const Complex& other) {
        re += other.re;
        im += other.im;
        return *this;
    }

    // version 1
    // Complex& operator+=(const Complex& other){
    //     *this = *this + other;
    //     return *this;
    // } Очень плохой код, работает очень не эффективно. Видно это на примере String: сначала будет создана
    //   строка с помощью оператора суммы *this + other, затем эта строка будет скопирована в объект, что тоже
    //   делается за линию, а уже после вернется ссылка на нее.

    // version 1
    // Complex operator+(const Complex& other) const {
    //     return Complex{re + other.re, im + other.im};
    //}
    //  У такого подхода есть своя проблема, мы бы с вами хотели уметь складывать числа Complex с
    //  double,  что мы сможем сделать. 
};

// version 2
// Complex operator+(const Complex& a, const Complex& b){
//     return Complex(a.re + b.re,  a.im + b.im);
// }

//version 3
Complex operator+(const Complex& a, const Complex& b) {
    Complex result = a;
    result += b;
    return result;
}

int main() {
    Complex c{1};
    c + 3.14; // синтаксический сахар для c.operator+(3.14), от 3.14 возьмется неявный каст к Complex с помощью
              // конструктора, и затем сложение.
    3.14 + c; // но в такой реализации такое сложение уже не возможно. Компилятор не будет проверяться все возможные 
              // конвертации double к каком-нибудь типу, у которого найдется operator+(const Complex&), а просто выведет 
              // ошибку.
              //Поэтому лучше все подобные операторы не делать методами класа.

}