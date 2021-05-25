/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_509_FIBONACCI_NUMBER_HPP
#define RCO_LEETCODE_SRC_EASY_509_FIBONACCI_NUMBER_HPP

#include <array>

class Solution {
 public:
  int fib(int n) {
    std::array<int, kMaxN + 1> lookup_table;

    lookup_table[0] = 0;
    lookup_table[1] = 1;

    for (auto i = 2; i <= n; ++i) {
      lookup_table[i] = lookup_table[i - 2] + lookup_table[i - 1];
    }

    return lookup_table[n];
  }

  static constexpr int kMaxN = 45;
};

#endif  // end of define RCO_LEETCODE_SRC_EASY_509_FIBONACCI_NUMBER_HPP
