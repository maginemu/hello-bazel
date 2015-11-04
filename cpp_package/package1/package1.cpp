#include "package1.hpp"

#include <iostream>

namespace package1
{

foo::foo() {};
foo::~foo() {};

void foo::say()
{
  std::cout << "Hello, \"package1::foo\" !" << std::endl;
}

} // namespace module1
