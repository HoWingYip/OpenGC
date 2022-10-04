#ifndef INTEGER_NODE_IMPL_H
#define INTEGER_NODE_IMPL_H

#include "ast-nodes/numbers/IntegerNode.hpp"

#include <type_traits>
#include <string>

namespace OpenGC {

// Note: if no parent constructor is provided in initializer list,
// the parent's default constructor is called
// But RealNode has no default constructor!
// Therefore we call the RealNode constructor explicitly.
IntegerNode::IntegerNode(std::int64_t value) : RealNode<std::int64_t>(value) {
  // static_assert(
  //   std::is_integral_v<T>,
  //   "IntegerNode must be constructed from integer type"
  // );

  this->value = value;
}

std::string IntegerNode::toString() {
  return "IntegerNode(" + std::to_string(this->value) + ")";
}

}

#endif
