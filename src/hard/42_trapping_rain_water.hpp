/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_HARD_42_TRAPPING_RAIN_WATER_HPP
#define RCO_LEETCODE_SRC_HARD_42_TRAPPING_RAIN_WATER_HPP

#include <algorithm>
#include <vector>

namespace trapping_rain_water {
class Solution {
 public:
  int trap(std::vector<int>& height) {
    int units_of_water = 0;

    for (int i = 1; i < height.size() - 1; ++i) {
      int left = i;

      for (int j = i; j > 0; --j) {
        if (height[j - 1] - height[j] < 0) {
          break;
        }
        left = j - 1;
      }

      int right = i;
      for (int j = i; j < height.size(); ++j) {
        if (height[j + 1] - height[j] < 0) {
          break;
        }
        right = j + 1;
      }

      auto max_local_height = std::min(height[left], height[right]);
      for (int j = left + 1; j < right; ++j) {
        units_of_water += max_local_height - height[j];
      }

      i = right;
    }

    return units_of_water;
  }
};

}  // end of namespace trapping_rain_water

#endif  // end of define RCO_LEETCODE_SRC_HARD_42_TRAPPING_RAIN_WATER_HPP