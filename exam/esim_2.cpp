#include <iostream>

class A
{
public:
    virtual void foo() = 0;
};

class B  : public A
{
public:
    void fooB() {
        std::cout << "I override foo function" << std::endl;
    }
    void foo(int x) {
        std::cout << x << std::endl;
    }
};

int main()
{
    B b;
    b.foo();
}




