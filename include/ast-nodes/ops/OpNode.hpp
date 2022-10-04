#ifndef OP_NODE_H
#define OP_NODE_H

#include "ast-nodes/Node.hpp"

namespace OpenGC {

class OpNode {
public:
  OpNode();
  Node evaluate();
};

}

#endif
