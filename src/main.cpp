#include <iostream>

#include "ast-nodes/numbers/RationalNode.hpp"

int main() {
  OpenGC::RationalNode rationalNode(100, 28);
  std::cout << rationalNode.evaluate() << '\n';

  std::cout << "Testing";
}
