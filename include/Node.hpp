#ifndef NODE_H
#define NODE_H

#include <vector>
#include <complex>

namespace OpenGC {

class Node {
  public:
  

  private:
  std::vector<Node> children;
  
  std::complex<long double> evaluate();
};

}

#endif
