/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_HPP
#define RCO_LEETCODE_SRC_MEDIUM_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_HPP

#include <utility>

#include <vector>

namespace product_of_array_except_self {
class Solution {
 public:
  std::vector<int> productExceptSelf(std::vector<int>& nums) {
    const auto count = nums.size();
    std::vector<int> answer(count, 1);

    auto right_product = std::move(calcRightProduct(nums));
    auto left_product = std::move(calcLeftProduct(nums));

    for (auto i = 0ul; i < count; ++i) {
      answer[i] = right_product[i] * left_product[i];
    }

    return answer;
  }

 private:
  std::vector<int> calcRightProduct(std::vector<int>& nums) {
    const auto count = nums.size();
    std::vector<int> right_product(count, 1);

    for (int i = static_cast<int>(count) - 2; i >= 0; --i) {
      right_product[i] = right_product[i + 1] * nums[i + 1];
    }

    return right_product;
  }

  std::vector<int> calcLeftProduct(std::vector<int>& nums) {
    const auto count = nums.size();
    std::vector<int> left_product(count, 1);

    for (size_t i = 1; i < count; ++i) {
      left_product[i] = left_product[i - 1] * nums[i - 1];
    }

    return left_product;
  }
};

}  // end of namespace product_of_array_except_self

#endif  // end of define
        // RCO_LEETCODE_SRC_MEDIUM_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_HPP
