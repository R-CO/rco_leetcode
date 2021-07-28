/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_746_MIN_COST_CLIMBING_STAIRS_HPP
#define RCO_LEETCODE_SRC_EASY_746_MIN_COST_CLIMBING_STAIRS_HPP

#include <algorithm>
#include <array>
#include <vector>

namespace min_cost_climbing_stairs {
class Solution {
 public:
  int minCostClimbingStairs(std::vector<int>& cost) {
    std::array<int, kMaxCostLength> min_cost_arry;
    min_cost_arry[0] = cost[0];
    min_cost_arry[1] = cost[1];

    for (size_t i = 2; i < cost.size(); ++i) {
      min_cost_arry[i] =
          cost[i] + std::min(min_cost_arry[i - 2], min_cost_arry[i - 1]);
    }

    return std::min(min_cost_arry[cost.size() - 2],
                    min_cost_arry[cost.size() - 1]);
  }

  static constexpr size_t kMaxCostLength = 1000;
};

} // end of namespace min_cost_climbing_stairs

#endif  // end of define RCO_LEETCODE_SRC_EASY_746_MIN_COST_CLIMBING_STAIRS_HPP
