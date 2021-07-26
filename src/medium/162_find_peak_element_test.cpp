/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "162_find_peak_element.hpp"

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(FindPeakElement, case_1) {
  vector<int> input = {1, 2, 3, 1};
  const int expected_output = 2;

  Solution solution;
  EXPECT_EQ(solution.findPeakElement(input), expected_output);
}

TEST(FindPeakElement, case_2) {
  vector<int> input = {1, 2, 1, 3, 5, 6, 4};
  const int expected_output = 1;  // either 1 or 4 can be the expected output

  Solution solution;
  EXPECT_EQ(solution.findPeakElement(input), expected_output);
}

TEST(FindPeakElement, case_3) {
  vector<int> input = {1, 2};
  const int expected_output = 1;

  Solution solution;
  EXPECT_EQ(solution.findPeakElement(input), expected_output);
}
