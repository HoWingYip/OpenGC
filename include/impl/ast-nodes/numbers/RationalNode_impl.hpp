#ifndef RATIONAL_NODE_IMPL_H
#define RATIONAL_NODE_IMPL_H

#include "ast-nodes/numbers/RationalNode.hpp"

#include <type_traits>
#include <cassert>
#include <numeric>
#include <utility>
#include <string>

namespace OpenGC {

RationalNode::RationalNode(std::int64_t num, std::int64_t den) {
  // static_assert(
  //   std::is_integral_v<T> && std::is_integral_v<U>,
  //   "Both numerator and denominator of a rational must be of integer type"
  // );

  assert(den != 0 && "Denominator of a rational cannot be zero");

  if (num == 0) {
    this->num = 0;
    this->den = 1;
  } else {
    auto gcd = std::gcd(num, den);
    this->num = num / gcd;
    this->den = den / gcd;
  }
}

std::pair<std::int64_t, std::int64_t> RationalNode::evaluate() {
  return std::pair<std::int64_t, std::int64_t>(this->num, this->den);
}

std::string RationalNode::toString() {
  return "RationalNode(" + std::to_string(this->num) + '/' + std::to_string(this->den) + ")";
}

}

#endif
