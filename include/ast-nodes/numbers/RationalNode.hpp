#ifndef RATIONAL_NODE_H
#define RATIONAL_NODE_H

#include <utility>
#include <string>

#include "ast-nodes/Node.hpp"

namespace OpenGC {

template <class T, class U>
class RationalNode : public Node {
public:
  RationalNode(T num, U den);
  std::pair<T, U> evaluate();
  std::string toString() override;

private:
  T num;
  U den;
};

}

#include "impl/ast-nodes/numbers/RationalNode_impl.hpp"

#endif
