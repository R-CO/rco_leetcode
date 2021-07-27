/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "213_house_robber_ii.hpp"

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(HouseRoberII, case_1) {
  vector<int> input = {2, 3, 2};
  const int expected_output = 3;

  Solution solution;
  EXPECT_EQ(solution.rob(input), expected_output);
}

TEST(HouseRoberII, case_2) {
  vector<int> input = {1, 2, 3, 1};
  const int expected_output = 4;

  Solution solution;
  EXPECT_EQ(solution.rob(input), expected_output);
}

TEST(HouseRoberII, case_3) {
  vector<int> input = {0};
  const int expected_output = 0;

  Solution solution;
  EXPECT_EQ(solution.rob(input), expected_output);
}
