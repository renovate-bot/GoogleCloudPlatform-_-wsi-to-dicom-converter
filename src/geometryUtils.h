// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SRC_GEOMETRYUTILS_H_
#define SRC_GEOMETRYUTILS_H_
#include <cstdint>

#include "src/enums.h"

namespace wsiToDicomConverter {

void dimensionDownsampling(
int64_t frameWidth, int64_t frameHeight, int64_t sourceLevelWidth,
int64_t sourceLevelHeight, bool retile, double downsampleOfLevel,
int64_t *downsampledLevelWidth, int64_t *downsampledLevelHeight,
int64_t *downsampledLevelFrameWidth, int64_t *downsampledLevelFrameHeight);

}  // namespace wsiToDicomConverter
#endif  // SRC_GEOMETRYUTILS_H_
