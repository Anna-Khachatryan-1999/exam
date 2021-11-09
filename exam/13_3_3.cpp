#include <iostream>

int number = 1;

class A
{
public:
    static int number;
    A() : x { new int(1) } { number++; }
    ~A() {
        number--;
        delete x;
    }
private:
    int* x;
};

int A::number = 1;

int main()
{
    int number = 2;
    std::cout << ::number << number << std::endl;
    return 0;
}


