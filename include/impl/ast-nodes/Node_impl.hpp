#ifndef NODE_IMPL_H
#define NODE_IMPL_H

#include "ast-nodes/Node.hpp"

#include <string>

namespace OpenGC {

// template <class T>
// T Node<T>::evaluate() {
//   return T(); // what should even go here?
// }

// template <class T>
std::string Node::toString() {
  return "Node()";
}

}

#endif
