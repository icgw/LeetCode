/*
 * example.cpp
 * Copyright (C) 2019 Guowei Chen <icgw@outlook.com>
 *
 * Distributed under terms of the MIT license.
 */


#include <iostream>
#include "solution.hpp"

void run_example()
{
  Solution sln;
  string ans = sln.removeOuterParentheses("(()())(())");
  std::cout << ans << "\n";
}
