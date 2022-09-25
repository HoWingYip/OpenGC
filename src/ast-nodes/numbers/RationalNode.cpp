#include "ast-nodes/numbers/RationalNode.hpp"

#include <numeric>

namespace OpenGC {

RationalNode::RationalNode(std::int64_t n, std::int64_t d) {
  std::int64_t gcd = std::gcd(n, d);
  this->n = IntegerNode(n / gcd);
  this->d = IntegerNode(d / gcd);
}

RationalNode::RationalNode(IntegerNode &n, IntegerNode &d) : n(n), d(d) {}

long double RationalNode::evaluate() {
  std::int64_t denominatorValue = this->d.evaluate();
  if (denominatorValue == 0) {
    throw std::invalid_argument("Cannot evaluate RationalNode with denominator zero");
  }

  return static_cast<long double>(this->n.evaluate()) / denominatorValue;
}

}
