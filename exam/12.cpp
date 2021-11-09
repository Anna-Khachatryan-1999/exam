#include <iostream>

class A
{
public:
    A() : _m{0} { std::cout << 1; }
    A(int x) : _m{x} { std::cout << 2; }
    A(const A&) { std::cout << 3; }
    A& operator=(const A&) {
        std::cout << 4;
        return *this;
    }
private:
    int _m;
};


int main()
{
    A a;
    A b = a;
    A c(b);
    A h(2);
    h = c;
}




