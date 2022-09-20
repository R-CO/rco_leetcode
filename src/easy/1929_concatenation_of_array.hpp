/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_1929_CONCATENATION_OF_ARRAY_HPP
#define RCO_LEETCODE_SRC_EASY_1929_CONCATENATION_OF_ARRAY_HPP

#include <vector>

namespace concatenation_of_array {
class Solution {
 public:
  std::vector<int> getConcatenation(std::vector<int>& nums) {
    std::vector<int> result(nums.size() << 1);

    for (size_t i = 0; i < nums.size(); ++i) {
      result[i] = result[i << 1] = nums[i];
    }

    return result;
  }
};

}  // end of namespace concatenation_of_array

#endif  // end of define RCO_LEETCODE_SRC_EASY_1929_CONCATENATION_OF_ARRAY_HPP