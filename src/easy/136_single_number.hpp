/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_136_SINGLE_NUMBER_HPP
#define RCO_LEETCODE_SRC_EASY_136_SINGLE_NUMBER_HPP

#include <vector>

namespace single_number {
class Solution {
 public:
  int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for (auto number : nums) {
      result ^= number;
    }

    return result;
  }
};

}  // end of namespace single_number

#endif  // end of define RCO_LEETCODE_SRC_EASY_NUMBER_SINGLE_NUMBER_HPP