/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_347_TOP_K_FREQUENT_ELEMENTS_HPP
#define RCO_LEETCODE_SRC_MEDIUM_347_TOP_K_FREQUENT_ELEMENTS_HPP

#include <map>
#include <vector>

namespace top_k_frequent_elements {
class Solution {
 public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::map<int, int> num_count;
    for (auto num : nums) {
      ++num_count[num];
    }

    std::map<int, std::vector<int>> frequent_map;
    for (auto num_count_pair : num_count) {
      frequent_map[num_count[num_count_pair.first]].push_back(
          num_count_pair.first);
    }

    std::vector<int> output;
    auto it = frequent_map.rbegin();
    size_t i = 0;
    while (k-- > 0) {
      output.push_back(it->second[i++]);
      if (i == it->second.size()) {
        i = 0;
        ++it;
      }
    }

    return output;
  }
};

}  // end of namespace top_k_frequent_elements

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_347_TOP_K_FREQUENT_ELEMENTS_HPP