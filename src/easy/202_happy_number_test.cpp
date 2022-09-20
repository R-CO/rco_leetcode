/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "202_happy_number.hpp"
using namespace happy_number;

#include <gtest/gtest.h>

TEST(HappyNumber, test_1) {
  constexpr int input = 19;
  constexpr bool expected_output = true;

  Solution solution;
  EXPECT_EQ(solution.isHappy(input), expected_output);
}

TEST(HappyNumber, test_2) {
  constexpr int input = 2;
  constexpr bool expected_output = false;

  Solution solution;
  EXPECT_EQ(solution.isHappy(input), expected_output);
}

TEST(HappyNumber, test_3) {
  constexpr int input = 75684987;
  constexpr bool expected_output = false;

  Solution solution;
  EXPECT_EQ(solution.isHappy(input), expected_output);
}
