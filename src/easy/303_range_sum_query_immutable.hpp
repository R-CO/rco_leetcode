/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_303_RANGE_SUM_QUERY_IMMUTABLE_HPP
#define RCO_LEETCODE_SRC_EASY_303_RANGE_SUM_QUERY_IMMUTABLE_HPP

#include <vector>

namespace range_sum_query_immutable {
class NumArray {
 public:
  NumArray(std::vector<int>& nums) {
    sum_from_left_.resize(nums.size());
    sum_from_right_.resize(nums.size());
    for (auto num : nums) {
      total_sum_ += num;
    }

    auto sum_from_right = total_sum_;
    for (size_t i = 0; i < nums.size(); ++i) {
      sum_from_left_[i] = total_sum_ - sum_from_right;
      sum_from_right -= nums[i];
      sum_from_right_[i] = sum_from_right;
    }
  }

  int sumRange(int left, int right) {
    return total_sum_ - sum_from_left_[left] - sum_from_right_[right];
  }

 private:
  int total_sum_ = 0;
  std::vector<int> sum_from_left_;
  std::vector<int> sum_from_right_;
};

}  // end of namespace range_sum_query_immutable

#endif  // end of define RCO_LEETCODE_SRC_EASY_303_RANGE_SUM_QUERY_IMMUTABLE_HPP