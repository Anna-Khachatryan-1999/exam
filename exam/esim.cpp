#include <iostream>

class A
{
public:
    A() { x = 0.0; }
    virtual double area() const {
        std::cout << x;
        return x * x;
    }

private:
    double x;
};

class B : public A
{
public:
    B() {y += x;}
    double area(const char *s) const {
        std::cout << s;
        return y;
    }

private:
    double y;
};

int main()
{
    A h;
    h.area();
    B k;
    k.area("Hello");
    return 0;
}


