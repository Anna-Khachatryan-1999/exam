#include <iostream>
class A
{
    public:
        A(int num) {this->member = num;}
        int operator+(const A& obj)
        {
            return this->member + obj.member;
        }
        const int get_mem() const
        {
            return member;
        }
    private:
        int member;
};

int main()
{
    A ob1(5);
    A ob2(2);
    A ob3(23);
    A result = ob1 + (ob2 + ob3);
    std::cout << result.get_mem() << std::endl;
    return 0;
}


