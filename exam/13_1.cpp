#include <iostream>

class A
{
public:
    A();

public:
    int _x;
    int _y;
};

A::A() : _x{0}, _y{0}
{
    std::cout << "A";
}

class B : public A
{
public:
    B ();

private:
    int _a;
};

B::B() : _a{1}
{
    std::cout << "B";
}

int main()
{
    B b;
    return 0;
}




