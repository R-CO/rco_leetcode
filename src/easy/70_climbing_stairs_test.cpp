#include "70_climbing_stairs.hpp"

#include <gtest/gtest.h>

TEST(ClimbingStairs, example1) {
  int input = 2;
  int expected_out = 2;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, example2) {
  int input = 3;
  int expected_out = 3;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_4) {
  int input = 4;
  int expected_out = 5;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_5) {
  int input = 5;
  int expected_out = 8;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_6) {
  int input = 6;
  int expected_out = 13;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_7) {
  int input = 7;
  int expected_out = 21;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_24) {
  int input = 24;
  int expected_out = 75025;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_35) {
  int input = 35;
  int expected_out = 14930352;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}

TEST(ClimbingStairs, stairs_45) {
  int input = 45;
  int expected_out = 1836311903;

  Solution solution;
  EXPECT_EQ(solution.climbStairs(input), expected_out);
}
