#include "1_two_sum.hpp"

#include <gtest/gtest.h>

#include <vector>
using std::vector;

#include <algorithm>

TEST(TwoSum, example1) {
  vector<int> input = {2, 7, 11, 15};
  const int target = 9;
  const vector<int> expected_out = {0, 1};

  Solution solution;
  EXPECT_EQ(std::equal(expected_out.begin(), expected_out.end(),
                       solution.twoSum(input, target).begin()),
            true);
}

TEST(TwoSum, example2) {
  vector<int> input = {3, 2, 4};
  const int target = 6;
  const vector<int> expected_out = {1, 2};

  Solution solution;
  EXPECT_EQ(std::equal(expected_out.begin(), expected_out.end(),
                       solution.twoSum(input, target).begin()),
            true);
}

TEST(TwoSum, example3) {
  vector<int> input = {3, 3};
  const int target = 6;
  const vector<int> expected_out = {0, 1};

  Solution solution;
  EXPECT_EQ(std::equal(expected_out.begin(), expected_out.end(),
                       solution.twoSum(input, target).begin()),
            true);
}
