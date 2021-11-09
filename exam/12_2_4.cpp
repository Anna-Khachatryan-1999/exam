#include <iostream>

class A
{
public:
    A();
    ~A();

public:
    int *x;
};

A::A() : x{ new int }
{
    *x = 12;
}

A::~A()
{
    std::cout << ++*x << std::endl;
    delete x;
}

int main()
{
    A();
    return 0;
}




