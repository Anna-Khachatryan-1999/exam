#include <iostream>

class A
{
public:
    A() { x = 1; }
    void foo() const
    {
        std::cout << x++ << std::endl;
    }
private:
    int x;
};

int main()
{
    A a;
    return 0;
}





