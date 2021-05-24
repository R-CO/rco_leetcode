/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "746_min_cost_climbing_stairs.hpp"

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(MinCostClimbingStairs, example_1) {
  std::vector<int> cost = {10, 15, 20};
  constexpr int expected_out = 15;

  Solution solution;
  EXPECT_EQ(solution.minCostClimbingStairs(cost), expected_out);
}

TEST(MinCostClimbingStairs, example_2) {
  std::vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  constexpr int expected_out = 6;

  Solution solution;
  EXPECT_EQ(solution.minCostClimbingStairs(cost), expected_out);
}
