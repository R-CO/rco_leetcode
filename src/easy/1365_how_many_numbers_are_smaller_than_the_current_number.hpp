/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_1365_HOW_MANY_1365S_ARE_SMALLER_THAN_THE_CURRENT_1365_HPP
#define RCO_LEETCODE_SRC_EASY_NUMBER_HOW_MANY_NUMBERS_ARE_SMALLER_THAN_THE_CURRENT_NUMBER_HPP

#include <vector>
#include <map>

namespace how_many_numbers_are_smaller_than_the_current_number {
class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
      std::vector<int> answer(nums.size(), 0);
      std::map<int, std::vector<int>> count_map;
      
      for (int i = 0; i < nums.size(); ++i) {
        count_map[nums[i]].push_back(i);
      }
      
      int count = 0;
      for (const auto &it : count_map) {
        for (const auto index : it.second) {
          answer[index] = count;
        }
        count += static_cast<int>(it.second.size());
      }
      
      return move(answer);
    }
};

} // end of namespace how_many_numbers_are_smaller_than_the_current_number

#endif  // end of define RCO_LEETCODE_SRC_EASY_NUMBER_HOW_MANY_NUMBERS_ARE_SMALLER_THAN_THE_CURRENT_NUMBER_HPP