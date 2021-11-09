#include <iostream>

class A
{
public:
    void moo() { std::cout << "M"; }
protected:
    void foo() { std::cout << "A";}
    int x;
};

class B : public A
{
public:
    B() : y{x} {}
    void foos() { foo(); }
private:
    int y;
};

int main()
{
    B b;
    b.foos();
}

:
