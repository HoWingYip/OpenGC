#ifndef NODE_H
#define NODE_H

#include <string>

namespace OpenGC {

template <class T>
class Node {
public:
  virtual T evaluate();
  virtual std::string toString();
};

}

#endif
