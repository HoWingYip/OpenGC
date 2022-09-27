#include <iostream>

#include "ast-nodes/numbers/IntegerNode.hpp"

int main() {
  OpenGC::IntegerNode intNode(2943422442323311);
  std::cout << intNode.evaluate() << ' ' << intNode.toString();
}
