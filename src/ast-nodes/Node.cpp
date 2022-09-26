#include "ast-nodes/Node.hpp"

namespace OpenGC {

template <class T>
T Node<T>::evaluate() {
  return nullptr;
}

template <class T>
std::string Node<T>::toString() {
  return "Node()";
}

}
