#ifndef REAL_NODE_H
#define REAL_NODE_H

#include "ast-nodes/Node.hpp"

namespace OpenGC {

template <class T>
class RealNode : public Node<T> {
public:
  RealNode(T value);
  T evaluate() override;
  std::string toString() override;

private:
  T value;
};

}

#endif
