/*
 * Copyright (c) 2022, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/**
 * @warning This file is deprecated and will be removed in release 22.06.
 * Please use the cuh version instead.
 */

#ifndef __MULTIPLY_H
#define __MULTIPLY_H

#pragma once

#include "detail/multiply.cuh"

namespace raft {
namespace linalg {

/**
 * @defgroup ScalarOps Scalar operations on the input buffer
 * @tparam math_t data-type upon which the math operation will be performed
 * @tparam IdxType Integer type used to for addressing
 * @param out the output buffer
 * @param in the input buffer
 * @param scalar the scalar used in the operations
 * @param len number of elements in the input buffer
 * @param stream cuda stream where to launch work
 * @{
 */
template <typename math_t, typename IdxType = int>
void multiplyScalar(math_t* out, const math_t* in, math_t scalar, IdxType len, cudaStream_t stream)
{
  detail::multiplyScalar(out, in, scalar, len, stream);
}
/** @} */

};  // end namespace linalg
};  // end namespace raft

#endif