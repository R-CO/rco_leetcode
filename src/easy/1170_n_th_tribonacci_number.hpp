/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_1170_N_TH_FIBONACCI_NUMBER_HPP
#define RCO_LEETCODE_SRC_EASY_1170_N_TH_FIBONACCI_NUMBER_HPP

#include <array>

namespace n_th_fibonacci_number {
class Solution {
 public:
  int tribonacci(int n) {
    std::array<int, kMaxN + 1> lookup_table;

    lookup_table[0] = 0;
    lookup_table[1] = 1;
    lookup_table[2] = 1;

    for (auto i = 3; i <= n; ++i) {
      lookup_table[i] =
          lookup_table[i - 3] + lookup_table[i - 2] + lookup_table[i - 1];
    }

    return lookup_table[n];
  }

  static constexpr int kMaxN = 37;
};

} // end of namespace n_th_fibonacci_number

#endif  // end of define RCO_LEETCODE_SRC_EASY_1170_N_TH_FIBONACCI_NUMBER_HPP
