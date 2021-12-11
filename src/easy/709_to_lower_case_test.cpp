/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "709_to_lower_case.hpp"
using namespace to_lower_case;

#include <gtest/gtest.h>

#include <string>
using std::string;

TEST(ToLowerCase, test_1) {
  const string input = "Hello";
  const string expected_output = "hello";

  Solution solution;
  EXPECT_EQ(solution.toLowerCase(input), expected_output);
}

TEST(ToLowerCase, test_2) {
  const string input = "here";
  const string expected_output = "here";

  Solution solution;
  EXPECT_EQ(solution.toLowerCase(input), expected_output);
}

TEST(ToLowerCase, test_3) {
  const string input = "LOVELY";
  const string expected_output = "lovely";

  Solution solution;
  EXPECT_EQ(solution.toLowerCase(input), expected_output);
}
