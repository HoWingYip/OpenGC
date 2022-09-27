#ifndef REAL_NODE_IMPL_H
#define REAL_NODE_IMPL_H

#include "ast-nodes/numbers/RealNode.hpp"

#include <type_traits>
#include <string>

namespace OpenGC {

template <class T>
RealNode<T>::RealNode(T value) {
  static_assert(
    std::is_arithmetic_v<T>,
    "RealNode must be constructed from integer or floating-point type"
  );
  
  this->value = value;
}

template <class T>
T RealNode<T>::evaluate() {
  return this->value;
}

template <class T>
std::string RealNode<T>::toString() {
  return "RealNode(" + std::to_string(this->value) + ")";
}

}

#endif
