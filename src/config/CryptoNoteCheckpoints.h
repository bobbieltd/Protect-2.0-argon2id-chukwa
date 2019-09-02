// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{    500, "2ddd86a49b6baa8e130a7d1c97c52eb9ab4a7beed8caf1eb20500e0aad9e6642"},
{    1000, "4b49d0c3a69deeffda67bf854c46e62a298e55431c804667cb33acbd43dfa59c"},
{    2000, "afcd7456f87f63109094c1ee29de287a72a89ee8df3efcc06ad47f5ff20e214e"},
{    3000, "069721f73a4501916475b678558dcfac3f3977958fc200052f6ea57178d06be3"},
{    4000, "f559b0e4f9339797892026b67489df5c1941826140f023ecb74a3084212b8464"},
{    5500, "b42dbe4ddda78ac083c5f795b6618d438587cff9e2b9d1ae58b544d7a77e74cc"}, 
};
}
