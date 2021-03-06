#ifndef PYTHONIC_INCLUDE_OPERATOR_IPOW_HPP
#define PYTHONIC_INCLUDE_OPERATOR_IPOW_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/__builtin__/pow.hpp"

PYTHONIC_NS_BEGIN

namespace operator_
{

  template <class A, class B>
  A ipow(A a, B const &b);

  DECLARE_FUNCTOR(pythonic::operator_, ipow);
}
PYTHONIC_NS_END

#endif
