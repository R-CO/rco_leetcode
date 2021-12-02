/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "387_first_unique_character_in_a_string.hpp"
using namespace first_unique_character_in_a_string;

#include <string>
using std::string;

#include <gtest/gtest.h>

TEST(FirstUniqueCharcterInAString, test_1) {
  const string input = "leetcode";
  const int expected_output = 0;

  Solution solution;
  EXPECT_EQ(solution.firstUniqChar(input), expected_output);
}

TEST(FirstUniqueCharcterInAString, test_2) {
  const string input = "loveleetcode";
  const int expected_output = 2;

  Solution solution;
  EXPECT_EQ(solution.firstUniqChar(input), expected_output);
}

TEST(FirstUniqueCharcterInAString, test_3) {
  const string input = "aabb";
  const int expected_output = -1;

  Solution solution;
  EXPECT_EQ(solution.firstUniqChar(input), expected_output);
}

TEST(FirstUniqueCharcterInAString, test_4) {
  const string input = "z";
  const int expected_output = 0;

  Solution solution;
  EXPECT_EQ(solution.firstUniqChar(input), expected_output);
}
