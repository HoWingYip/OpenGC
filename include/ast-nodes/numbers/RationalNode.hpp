#ifndef RATIONAL_NODE_H
#define RATIONAL_NODE_H

#include "ast-nodes/numbers/IntegerNode.hpp"

namespace OpenGC {

class RationalNode : Node {
  public:
  RationalNode(std::int64_t n, std::int64_t d);
  RationalNode(IntegerNode &n, IntegerNode &d);
  long double evaluate();

  private:
  IntegerNode n;
  IntegerNode d;
  void simplify();
};

}

#endif
