#include <iostream>

class A
{
public:
    A() : x{new int} { std::cout << 1;}
    void foo() {
        std::cout << 2;
    }
    ~A() {
        std::cout << 3;
        delete x;
    }

private:
    int* x;
};

int main()
{
    A* b = new A();
    b->foo();
    delete b;
}



