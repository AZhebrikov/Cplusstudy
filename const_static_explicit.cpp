#include<iostream>

struct Singleton {
private:
        static Singleton* ptr;

        Singleton() {}
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;

public:
        static Singleton& getObject() {
                if (ptr == nullptr) {
                        ptr = new Singleton();
                }
                return *ptr;
        }


};
Singleton* Singleton::ptr = nullptr;

int main() {

        Singleton& s = Singleton::getObject();

}
