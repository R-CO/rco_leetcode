/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_198_HOUSE_ROBBER_HPP
#define RCO_LEETCODE_SRC_MEDIUM_198_HOUSE_ROBBER_HPP

#include <algorithm>

#include <vector>

class Solution {
public:
  int rob(std::vector<int> &nums) {
    const size_t size = nums.size();
    if (size == 0) {
      return 0;
    }

    if (size == 1) {
      return nums[0];
    }

    std::vector<int> max_sum(size + 1);
    max_sum[0] = 0;
    max_sum[1] = nums[0];
    for (size_t i = 1; i < size; ++i) {
      max_sum[i+1] = (std::max(max_sum[i-1] + nums[i], max_sum[i]));
    }

    return max_sum[size];
  }
};

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_198_HOUSE_ROBBER_HPP
