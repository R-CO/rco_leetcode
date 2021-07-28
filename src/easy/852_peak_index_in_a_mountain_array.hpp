/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_852_PEAK_INDEX_IN_A_MOUNTAIN_ARRAY_HPP
#define RCO_LEETCODE_SRC_EASY_852_PEAK_INDEX_IN_A_MOUNTAIN_ARRAY_HPP

#include <vector>

class Solution {
 public:
  int peakIndexInMountainArray(std::vector<int>& arr) {
    auto peak_index = 1;
    size_t left_bound = 0;
    size_t right_bound = arr.size() - 1;
    auto is_found = false;

    while (!is_found) {
      const auto sum = right_bound + left_bound;
      const auto mid_pos = (sum >> 1) + (sum & 0x1);
      auto left_slope = arr[mid_pos] - arr[mid_pos - 1];
      auto right_slope = arr[mid_pos + 1] - arr[mid_pos];
      if (left_slope > 0 && right_slope < 0) {
        is_found = true;
        peak_index = static_cast<int>(mid_pos);
      } else if (left_slope < 0) {
        right_bound = mid_pos;
      } else if (right_slope > 0) {
        left_bound = mid_pos;
      }
    }

    return peak_index;
  }
};

#endif  // end of define RCO_LEETCODE_SRC_EASY_852_PEAK_INDEX_IN_A_MOUNTAIN_ARRAY_HPP
