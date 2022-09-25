#include "ast-nodes/numbers/IntegerNode.hpp"

namespace OpenGC {

IntegerNode::IntegerNode(std::int64_t value) : value(value) {}

std::int64_t IntegerNode::evaluate() {
  return this->value;
}

}
