/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "42_trapping_rain_water.hpp"
using namespace trapping_rain_water;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(TrappingRainWater, test_1) {
  std::vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  constexpr int expected_output = 6;

  Solution solution;
  EXPECT_EQ(solution.trap(height), expected_output);
}

TEST(TrappingRainWater, test_2) {
  std::vector<int> height = {4,2,0,3,2,5};
  constexpr int expected_output = 9;

  Solution solution;
  EXPECT_EQ(solution.trap(height), expected_output);
}
