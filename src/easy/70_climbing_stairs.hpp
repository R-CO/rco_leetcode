/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_70_CLIMBING_STAIRS_HPP
#define RCO_LEETCODE_SRC_EASY_70_CLIMBING_STAIRS_HPP

#include <array>

namespace climbing_stairs {
class Solution {
 public:
  int climbStairs(int n) {
    std::array<int, kMaxStairs + 1> lookup_table;

    lookup_table[0] = 0;
    lookup_table[1] = 1;
    lookup_table[2] = 2;

    for (auto i = 3; i <= n; ++i) {
      lookup_table[i] = lookup_table[i - 2] + lookup_table[i - 1];
    }

    return lookup_table[n];
  }

  static constexpr int kMaxStairs = 45;
};

} // end of namespace climbing_stairs

#endif  // end of define RCO_LEETCODE_SRC_EASY_70_CLIMBING_STAIRS_HPP
