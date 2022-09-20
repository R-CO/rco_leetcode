/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_915_PARTITION_ARRAY_INTO_DISJOINT_INTERVALS_HPP
#define RCO_LEETCODE_SRC_MEDIUM_915_PARTITION_ARRAY_INTO_DISJOINT_INTERVALS_HPP

#include <algorithm>
#include <vector>
using std::vector;

class Solution {
 public:
  int partitionDisjoint(vector<int>& nums) {
    vector<int> right_min(nums.size(), kMaxNum);
    right_min[nums.size() - 1] = nums[nums.size() - 1];
    for (int i = static_cast<int>(nums.size() - 2); i >= 0; --i) {
      right_min[i] = std::min(nums[i], right_min[i + 1]);
    }

    int left_max = nums[0];
    int left_count = 1;
    auto right_min_it = ++(right_min.begin());
    auto it = ++(nums.begin());
    for (; it != nums.end(); ++it) {
      if (left_max <= *right_min_it) {
        break;
      }

      ++left_count;
      if (*it > left_max) {
        left_max = *it;
      }

      ++right_min_it;
    }

    if (static_cast<size_t>(left_count) == nums.size()) {
      --left_count;
    }

    return left_count;
  }

 private:
  const int kMaxNum = 1000000;
};

#endif  // end of define
        // RCO_LEETCODE_SRC_MEDIUM_915_PARTITION_ARRAY_INTO_DISJOINT_INTERVALS_HPP
