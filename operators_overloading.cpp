#include "iostream"
#include <condition_variable>
#include <ostream>

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

std::ostream& operator<<(std::ostream& out, const Complex&  b);
std::istream& operator>>(std::istream& in, Complex& b);

bool operator<(const Complex& a, const Complex& b) {
    return a.re < b.re || a.re == b.re && a.im < b.im ;
}

bool operator>(const Complex& a, const Complex& b) {
    return b < a; // не надо писать отрицание факта a <= b, так как вероятно будет проделано 
                  // в два раза больше действий. Достаточно просто поменять аргументы местами и все.
}

bool operator<=(const Complex& a, const Complex& b) {
    return !(a > b);
}//  и так далее ...

int main() {

}
    