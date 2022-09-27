#ifndef INTEGER_NODE_H
#define INTEGER_NODE_H

#include "ast-nodes/numbers/RealNode.hpp"

namespace OpenGC {

template <class T>
class IntegerNode : public RealNode<T> {
public:
  IntegerNode(T value);
  std::string toString() override;
};

}

#include "impl/ast-nodes/numbers/IntegerNode_impl.hpp"

#endif
