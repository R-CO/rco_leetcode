/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_347_TOP_K_FREQUENT_ELEMENTS_HPP
#define RCO_LEETCODE_SRC_MEDIUM_347_TOP_K_FREQUENT_ELEMENTS_HPP

#include <queue>
#include <unordered_map>
#include <vector>

namespace top_k_frequent_elements {
class Solution {
 public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    if (k == nums.size()) {
      return nums;
    }

    std::unordered_map<int, int> num_count;
    for (auto num : nums) {
      ++num_count[num];
    }

    std::priority_queue<std::pair<int, int>> frequent_queue;
    for (const auto &num_count_pair : num_count) {
      frequent_queue.push(
          std::make_pair(num_count_pair.second, num_count_pair.first));
    }

    std::vector<int> output(static_cast<size_t>(k));
    for (size_t i = 0; i < static_cast<size_t>(k); ++i) {
      output[i] = frequent_queue.top().second;
      frequent_queue.pop();
    }

    return output;
  }
};

}  // end of namespace top_k_frequent_elements

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_347_TOP_K_FREQUENT_ELEMENTS_HPP