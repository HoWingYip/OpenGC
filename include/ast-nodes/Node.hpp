#ifndef NODE_H
#define NODE_H

#include <vector>
#include <complex>

namespace OpenGC {

class Node {
  public:
  // std::complex<long double> evaluate();
  std::size_t numChildren();

  private:
  std::vector<Node> children;
};

}

#endif
