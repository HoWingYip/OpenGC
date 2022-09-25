#include "ast-nodes/Node.hpp"

#include <complex>

namespace OpenGC {

std::size_t Node::numChildren() {
  return this->children.size();
}

}
