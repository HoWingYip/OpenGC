#ifndef ADDITION_NODE_H
#define ADDITION_NODE_H

#include "ast-nodes/ops/OpNode.hpp"
#include "ast-nodes/numbers/IntegerNode.hpp"
#include "ast-nodes/numbers/RationalNode.hpp"
#include "ast-nodes/numbers/RealNode.hpp"

namespace OpenGC {

template <class T, class U>
class AdditionNode : public OpNode {
public:
  AdditionNode(T node1, U node2);

  IntegerNode AdditionNode<IntegerNode, IntegerNode>::evaluate();
  RationalNode AdditionNode<IntegerNode, RationalNode>::evaluate();
  RationalNode AdditionNode<RationalNode, IntegerNode>::evaluate();
  RealNode AdditionNode<RealNode, RealNode>::evaluate();
  RealNode AdditionNode<RealNode, RationalNode>::evaluate();
  RealNode AdditionNode<RationalNode, RealNode>::evaluate();

  // what about OpNodes? How to deduce return node type?
  // write NumberNode class then attempt to cast to more specific number node types?
  // NumberNode AdditionNode<OpNode, OpNode>::evaluate();

private:
  T &node1;
  U &node2;
};

}

#include "impl/ast-nodes/ops/AdditionNode_impl.hpp"

#endif
