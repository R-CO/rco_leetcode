/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "136_single_number.hpp"
using namespace single_number;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(SingleNumber, test_1) {
  const vector<int> nums = {2, 2, 1};
  const int expected_output = 1;

  Solution solution;
  EXPECT_EQ(solution.singleNumber(const_cast<vector<int> &>(nums)),
            expected_output);
}

TEST(SingleNumber, test_2) {
  const vector<int> nums = {4, 1, 2, 1, 2};
  const int expected_output = 4;

  Solution solution;
  EXPECT_EQ(solution.singleNumber(const_cast<vector<int> &>(nums)),
            expected_output);
}

TEST(SingleNumber, test_3) {
  const vector<int> nums = {1};
  const int expected_output = 1;

  Solution solution;
  EXPECT_EQ(solution.singleNumber(const_cast<vector<int> &>(nums)),
            expected_output);
}
