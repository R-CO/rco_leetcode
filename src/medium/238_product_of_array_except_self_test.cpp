/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "238_product_of_array_except_self.hpp"
using namespace product_of_array_except_self;

#include <gtest/gtest.h>

#include <algorithm>
#include <vector>

TEST(ProductOfArrayExceptSelf, test_1) {
  std::vector<int> nums = {1, 2, 3, 4};
  const std::vector<int> expected_output = {24, 12, 8, 6};

  Solution solution;
  EXPECT_EQ(std::equal(expected_output.begin(), expected_output.end(),
                       solution.productExceptSelf(nums).begin()),
            true);
}

TEST(ProductOfArrayExceptSelf, test_2) {
  std::vector<int> nums = {-1, 1, 0, -3, 3};
  const std::vector<int> expected_output = {0, 0, 9, 0, 0};

  Solution solution;
  EXPECT_EQ(std::equal(expected_output.begin(), expected_output.end(),
                       solution.productExceptSelf(nums).begin()),
            true);
}
