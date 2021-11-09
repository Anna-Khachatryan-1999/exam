#include <iostream>

class A
{
public:
  A() { x++; }
 ~A() { --x; }
  static int x;
} a;

A b;

void foo (A b) {
  std::cout << "C++\n";
}

