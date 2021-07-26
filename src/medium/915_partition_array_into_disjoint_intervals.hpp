/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_915_PARTITION_ARRAY_INTO_DISJOINT_INTERVALS_HPP
#define RCO_LEETCODE_SRC_MEDIUM_915_PARTITION_ARRAY_INTO_DISJOINT_INTERVALS_HPP

#include <map>
using std::map;
using std::pair;
#include <vector>
using std::vector;

class Solution {
 public:
  int partitionDisjoint(vector<int>& nums) {
    int left_count = 1;
    int left_max = nums[0];
    map<int, int> right_map;

    // build-up right_map
    for (size_t i = static_cast<int>(left_count); i < nums.size(); ++i) {
      auto num = nums[i];
      auto it = right_map.find(num);
      if (it == right_map.end()) {
        right_map.insert(pair<int, int>(num, 1));
      } else {
        ++(it->second);
      }
    }
    auto current_right_map_min_it = right_map.begin();

    auto it = nums.begin();
    ++it;
    for (; it != nums.end(); ++it) {
      if (left_max <= current_right_map_min_it->first) {
        break;
      }

      ++left_count;
      if (*it > left_max) {
        left_max = *it;
      }

      --right_map[*it];
      while (current_right_map_min_it->second == 0) {
        ++current_right_map_min_it;
      }
    }

    if (static_cast<size_t>(left_count) == nums.size()) {
      --left_count;
    }

    return left_count;
  }
};

#endif  // end of define
        // RCO_LEETCODE_SRC_MEDIUM_915_PARTITION_ARRAY_INTO_DISJOINT_INTERVALS_HPP
