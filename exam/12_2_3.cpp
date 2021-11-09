#include <iostream>

class A
{
public:
    A(int x) : _x{x} {}
    A(const A& other) {
        std::cout << "copy" << std::endl;
        _x = other._x;
    }
private:
    int _x;
};

int main()
{
    A a(5);
    A b(6);
    b = a;
    return 0;
}




