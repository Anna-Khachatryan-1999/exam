#include <iostream>

class A
{
public:
    A() : x{0} {}
    void foo() { std::cout << "A"; }
private:
    int x;
};

class B : public A
{
public:
    B() : y{0} {}
    void foo() { std::cout << "B"; }
private:
    int y;
};

int main()
{
    A a;
    B b;
    a.foo();
    b.foo();
    A* c = new B();
    c.foo();
    return 0;
}




