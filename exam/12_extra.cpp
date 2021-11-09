#include <iostream>

class A
{
public:
    A(int a) {
        x = a;
        std::cout << "A";
    }
    int getA() {return x; }
    A& operator=(const A& other) {
        x = other.x;
        std::cout << "B";
        return *this;
    }
    A(const A&) = delete;
private:
    int x;
};

int main()
{
    A a(4);
    A b(12);
    A c (3);
    a = b = c;
    std::cout << a.getA();
    std::cout << b.getA();
    std::cout << c.getA();
}



