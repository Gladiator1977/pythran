#ifndef PYTHONIC_NUMPY_ISINF_HPP
#define PYTHONIC_NUMPY_ISINF_HPP

#include "pythonic/include/numpy/isinf.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"
#include <boost/simd/function/is_inf.hpp>

PYTHONIC_NS_BEGIN

namespace numpy
{
  namespace wrapper
  {
    template <class T>
    bool isinf(T const &v)
    {
      return boost::simd::is_inf(v);
    }
  }
#define NUMPY_NARY_FUNC_NAME isinf
#define NUMPY_NARY_FUNC_SYM wrapper::isinf
#include "pythonic/types/numpy_nary_expr.hpp"
}
PYTHONIC_NS_END

#endif
