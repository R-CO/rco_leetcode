#include "70_climbing_stairs.hpp"

#include <gtest/gtest.h>

TEST(TwoSum, example1) {
  int input = 2;
  int expected_out = 2;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(TwoSum, example2) {
  int input = 3;
  int expected_out = 3;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(TwoSum, stairs_4) {
  int input = 4;
  int expected_out = 5;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(TwoSum, stairs_5) {
  int input = 5;
  int expected_out = 8;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}
