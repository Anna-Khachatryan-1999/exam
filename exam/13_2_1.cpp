#include <iostream>

class A
{
public:
    A() : _x{2} {}
    A(const A& other) {
        _x = other._x;
    }
    void print() {
        std::cout << _x << std::endl;
    }

private:
    int _x;
};

int main()
{
    A a;
    A b(a);
    b.print();
    return 0;
}




