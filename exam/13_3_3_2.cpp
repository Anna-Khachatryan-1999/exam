#include <iostream>

class A
{
public:
    virtual void foo() = 0;
    virtual void moo() = 0;
    virtual void too() = 0;
};

class B : public A
{
public:
    B(int y) : x{y} { std::cout << 1; }
    void foo() { std::cout << 2; }
    void moo() override { std::cout << 3; }
private:
    int x;
};

class C : public A
{
public:
    C(int y) : t{y} { std::cout << 1; }
    void too() { std::cout << 2; }
private:
    int t;
    B* b;
};


int main()
{
    C* c;
    std::cout << "\"runtime error\"";
}



