/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_80_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_HPP
#define RCO_LEETCODE_SRC_MEDIUM_80_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_HPP

// C++ STL
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

static auto _ = []() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return 0;
}();

namespace remove_duplicates_from_sorted_array_ii {
class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int swap_pos = static_cast<int>(nums.size()) - 1;
    int dup_count = 0;
    int curr_number = nums[0];
    int curr_count = 1;

    for (int i = 1; i <= swap_pos; ++i) {
      if (nums[i] != curr_number) {
        curr_number = nums[i];
        curr_count = 1;
        continue;
      }

      if (++curr_count <= 2) {
        continue;
      }

      nums[i] = nums[swap_pos--];
      for (int j = i; j < swap_pos; ++j) {
        if (nums[j] <= nums[j + 1]) {
          break;
        }

        std::swap(nums[j], nums[j + 1]);
      }

      ++dup_count;
      --i;
    }

    return static_cast<int>(nums.size()) - dup_count;
  }
};

}  // end of namespace remove_duplicates_from_sorted_array_ii

#endif  // end of define
        // RCO_LEETCODE_SRC_MEDIUM_80_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_HPP