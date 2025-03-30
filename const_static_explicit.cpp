#include<iostream>

class BigInteger {};

BigInteger operator""_bi(unsigned long long x) {
        return BigInteger();
}

int main() {

        BigInteger bi = 1_bi;

}
