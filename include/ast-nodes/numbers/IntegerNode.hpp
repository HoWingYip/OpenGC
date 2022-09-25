#ifndef INTEGER_NODE_H
#define INTEGER_NODE_H

#include <cstdint>

#include "ast-nodes/Node.hpp"

namespace OpenGC {

// TODO: add support for integers wider than 64 bits
class IntegerNode : Node {
public:
  IntegerNode() = default;
  IntegerNode(std::int64_t value);
  std::int64_t evaluate();

private:
  std::int64_t value;
};

}

#endif
