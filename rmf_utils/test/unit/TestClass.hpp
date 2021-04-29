/*
 * Copyright (C) 2019 Open Source Robotics Foundation
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
 *
*/

#ifndef RMF_UTILS__TEST__UNIT__TESTCLASS_HPP
#define RMF_UTILS__TEST__UNIT__TESTCLASS_HPP

#include <string>
#include <rmf_utils/impl_ptr.hpp>

class TestClass
{
public:

  TestClass(const std::string& test_text);

  std::string get_test_text() const;

  class Implementation;
  rmf_utils::impl_ptr<Implementation> _pimpl;

};

#endif // RMF_UTILS__TEST__UNIT__TESTCLASS_HPP
