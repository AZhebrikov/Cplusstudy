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

Complex operator+(const Complex& a, const Complex& b) {
    Complex result = a;
    result += b;
    return result;
}

int main() {

Complex a{1.0};
Complex b{2.0};
Complex d{3.0};
a + b = d; // CE or OK? Вообще мы говорили, что для стандартных типов присваивать rvalue нельзя, но никто не говорил,
           // что это правило сохраниться для наших типов. С этим можно бороться двумя способами:
           // сделать возвращаемое значение const Complex, но этот вариант не самый хорошый, есть вариант, который пока
           // нужно взять на веру. Написать свой оператор присваивания и указать, что он должен рботать только для
           // lvalue типов.

}
    