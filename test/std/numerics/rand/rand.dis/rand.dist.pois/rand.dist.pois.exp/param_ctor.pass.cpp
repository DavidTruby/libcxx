//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <random>

// template<class RealType = double>
// class exponential_distribution
// {
//     class param_type;

#include <random>
#include <limits>
#include <cassert>

#include "test_macros.h"

int main(int, char**)
{
    {
        typedef std::exponential_distribution<> D;
        typedef D::param_type param_type;
        param_type p;
        assert(p.lambda() == 1);
    }
    {
        typedef std::exponential_distribution<> D;
        typedef D::param_type param_type;
        param_type p(10);
        assert(p.lambda() == 10);
    }

  return 0;
}
