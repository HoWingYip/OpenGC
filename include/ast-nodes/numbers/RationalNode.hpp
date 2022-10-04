#ifndef RATIONAL_NODE_H
#define RATIONAL_NODE_H

#include <utility>
#include <string>

#include "ast-nodes/Node.hpp"

namespace OpenGC {

// template <class T, class U>
class RationalNode : public Node {
public:
  RationalNode(std::int64_t num, std::int64_t den);
  std::pair<std::int64_t, std::int64_t> evaluate();
  std::string toString() override;

private:
  std::int64_t num;
  std::int64_t den;
};

}

#include "impl/ast-nodes/numbers/RationalNode_impl.hpp"

#endif
