/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_213_HOUSE_ROBBER_II_HPP
#define RCO_LEETCODE_SRC_MEDIUM_213_HOUSE_ROBBER_II_HPP

#include <algorithm>

#include <vector>

namespace house_robber_ii {

class Solution {
public:
    int rob(std::vector<int>& nums) {
        if (nums.size() == 1) {
          return nums[0];
        }
      
        std::vector<int> type1(nums.size() + 1, 0);
        std::vector<int> type2(nums.size() + 1, 0);
      
        for (size_t i = 2; i < type1.size(); ++i) {
          type1[i] = std::max(nums[i-2]+type1[i-2], type1[i-1]);
        }
        for (size_t i = 2; i < type2.size(); ++i) {
          type2[i] = std::max(nums[i-1]+type2[i-2], type2[i-1]);
        }
      
        return std::max(type1[nums.size()], type2[nums.size()]);
    }
};

} // end of namespace house_robber_ii

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_213_HOUSE_ROBBER_II_HPP
