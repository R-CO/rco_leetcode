/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_162_FIND_PEAK_ELEMENT_HPP
#define RCO_LEETCODE_SRC_MEDIUM_162_FIND_PEAK_ELEMENT_HPP

#include <vector>

namespace find_peak_element {
class Solution {
 public:
  int findPeakElement(std::vector<int>& nums) {
    int peak_index = 0;

    bool is_found = false;
    int left_slope = 1;
    int right_slope = 0;

    int upper_bound = static_cast<int>(nums.size()) - 1;
    int i = 0;
    for (i = 0; i < upper_bound; ++i) {
      right_slope = nums[i + 1] - nums[i];
      if (left_slope > 0 && right_slope < 0) {
        peak_index = i;
        is_found = true;
        break;
      }

      left_slope = right_slope;
    }

    if (!is_found && i == upper_bound) {
      peak_index = upper_bound;
      is_found = true;
    }

    return peak_index;
  }
};

} // end of namespace find_peak_element

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_162_FIND_PEAK_ELEMENT_HPP
