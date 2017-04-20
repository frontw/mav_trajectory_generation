/*
 * Copyright (c) 2016, Markus Achtelik, ASL, ETH Zurich, Switzerland
 * Copyright (c) 2016, Michael Burri, ASL, ETH Zurich, Switzerland
 * Copyright (c) 2016, Helen Oleynikova, ASL, ETH Zurich, Switzerland
 * Copyright (c) 2016, Rik Bähnemann, ASL, ETH Zurich, Switzerland
 * Copyright (c) 2016, Marija Popovic, ASL, ETH Zurich, Switzerland
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MAV_TRAJECTORY_GENERATION_FEASIBILITY_SAMPLING_H_
#define MAV_TRAJECTORY_GENERATION_FEASIBILITY_SAMPLING_H_

#include "mav_trajectory_generation_ros/feasibility_base.h"

namespace mav_trajectory_generation {

// Sampling based input and position feasibility checks.
class FeasibilitySampling : public FeasibilityBase {
 public:
  // Checks a segment for input feasibility.
  virtual bool checkInputFeasibility();

  // Checks if a segment stays within a set of half planes.
  virtual bool checkHalfPlaneFeasibility();
};
}  // namespace mav_trajectory_generation

#endif  // MAV_TRAJECTORY_GENERATION_FEASIBILITY_SAMPLING_H_