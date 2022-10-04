#ifndef ADDITION_NODE_IMPL_H
#define ADDITION_NODE_IMPL_H

#include "ast-nodes/ops/AdditionNode.hpp"

#include <type_traits>

#include "ast-nodes/Node.hpp"
#include "ast-nodes/numbers/IntegerNode.hpp"

namespace OpenGC {

template <class T, class U>
AdditionNode<T, U>::AdditionNode(T node1, U node2) {
  static_assert(
    std::is_base_of_v<Node, T> && std::is_base_of_v<Node, U>,
    "Both arguments to AdditionNode constructor must be child classes of Node"
  );

  this->node1 = node1;
  this->node2 = node2;
}

IntegerNode AdditionNode<IntegerNode, IntegerNode>::evaluate() {
  return this->node1.evaluate() + this->node2.evaluate();
}

RationalNode AdditionNode<IntegerNode, RationalNode>::evaluate() {
  std::int64_t n = this->node1.evaluate();
  auto [num, den] = this->node2.evaluate();
  return { num + n * den, den };
}

RationalNode AdditionNode<RationalNode, IntegerNode>::evaluate() {
  // nearly the exact same logic as previous overload with template parameters swapped
  // TODO: avoid repeating yourself
  std::int64_t n = this->node2.evaluate();
  auto [num, den] = this->node1.evaluate();
  return { num + n * den, den };
}



}

#endif
