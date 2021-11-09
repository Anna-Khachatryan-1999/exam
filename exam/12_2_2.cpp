#include <iostream>

class A
{
public:
    A() { x = new int; }
private:
    int* x;
};

int main()
{
    A a;
    return 0;
}





