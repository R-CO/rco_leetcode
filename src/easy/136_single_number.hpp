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
    constexpr int offset = 30000;
    int count_array[offset * 2 + 1] = {0};

    for (auto number : nums) {
      ++count_array[number + offset];
    }

    int result = 0;
    for (auto number : nums) {
      if (count_array[number + offset] & 0x1) {
        result = number;
        break;
      }
    }

    return result;
  }
};

}  // end of namespace single_number

#endif  // end of define RCO_LEETCODE_SRC_EASY_NUMBER_SINGLE_NUMBER_HPP