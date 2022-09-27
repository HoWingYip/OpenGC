#ifndef NODE_IMPL_H
#define NODE_IMPL_H

#include "ast-nodes/Node.hpp"

#include <string>

namespace OpenGC {

template <class T>
T Node<T>::evaluate() {
  return T();
}

template <class T>
std::string Node<T>::toString() {
  return "Node()";
}

}

#endif
