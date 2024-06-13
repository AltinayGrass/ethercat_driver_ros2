// Copyright 2024 ICUBE Laboratory, University of Strasbourg
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: Manuel YGUEL (yguel.robotics@gmail.com)

#ifndef TESTHELPER_ETHERCAT_SAFETY_DRIVER_HPP_
#define TESTHELPER_ETHERCAT_SAFETY_DRIVER_HPP_

#include "ethercat_driver/ethercat_safety_driver.hpp"

namespace ethercat_driver
{

class TestHelperEthercatSafetyDriver : public ethercat_driver::EthercatSafetyDriver
{
public:
  using EthercatSafetyDriver::getEcSafetyModuleParam;
  using EthercatSafetyDriver::getEcSafetyNets;
};

}  // namespace ethercat_driver

#endif  // TESTHELPER_ETHERCAT_SAFETY_DRIVER_HPP_
