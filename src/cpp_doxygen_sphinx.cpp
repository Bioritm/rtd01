#include "../include/cpp_doxygen_sphinx.hpp"
#include <iostream>

void Foo::say_hello(const std::string& message) const {
  std::cout << "Hello: " << message << std::endl;
}
