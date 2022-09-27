#include <iostream>

#include "ast-nodes/numbers/RealNode.hpp"

int main() {
  OpenGC::RealNode<std::int64_t> realNode(6942000000);
  std::cout << realNode.evaluate() << realNode.toString();

  // FIXME: undefined reference to RealNode and Node methods because
  // the templates in Node.cpp and RealNode.cpp are not specialised
  // see https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
}
