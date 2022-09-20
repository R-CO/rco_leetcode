/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_1_TWO_SUM_HPP
#define RCO_LEETCODE_SRC_EASY_1_TWO_SUM_HPP

#include <unordered_map>
#include <vector>

namespace two_sum {

class Solution {
 public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> pos_map;
    for (size_t i = 0; i < nums.size(); ++i) {
      const auto& diff_pos_itor = pos_map.find(target - nums[i]);
      if (diff_pos_itor != pos_map.end()) {
        return {diff_pos_itor->second, static_cast<int>(i)};
      }

      pos_map.insert(std::pair<int, int>(nums[i], static_cast<int>(i)));
    }

    return {};
  }
};

} // end of namespace two_sum

#endif  // end of define RCO_LEETCODE_SRC_EASY_1_TWO_SUM_HPP
