#include <iostream>

#include "ast-nodes/numbers/RationalNode.hpp"

int main() {
  OpenGC::RationalNode rationalNode(4, 127);
  std::pair<std::int64_t, std::int8_t> rational = rationalNode.evaluate();
  std::cout << rational.first << '/' << +rational.second << ' ' << rationalNode.toString();
}
