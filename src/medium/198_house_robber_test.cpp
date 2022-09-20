/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "198_house_robber.hpp"
using namespace house_robber;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(HouseRobber, case_1) {
  vector<int> input = {1, 2, 3, 1};
  const int expected_output = 4;

  Solution solution;
  EXPECT_EQ(solution.rob(input), expected_output);
}

TEST(HouseRobber, case_2) {
  vector<int> input = {2, 7, 9, 3, 1};
  const int expected_output = 12;

  Solution solution;
  EXPECT_EQ(solution.rob(input), expected_output);
}
