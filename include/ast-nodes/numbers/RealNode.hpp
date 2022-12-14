#ifndef REAL_NODE_H
#define REAL_NODE_H

#include "ast-nodes/Node.hpp"

namespace OpenGC {

template <class T>
class RealNode : public Node {
public:
  RealNode(T value);
  T evaluate();
  virtual std::string toString() override;

protected:
  T value;
};

}

#include "impl/ast-nodes/numbers/RealNode_impl.hpp"

#endif
