/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "461_hamming_distance.hpp"
using namespace hamming_distance;

#include <gtest/gtest.h>

TEST(HammingDistance, test_1) {
  const int x = 1;
  const int y = 4;
  const int expected_output = 2;

  Solution solution;
  EXPECT_EQ(solution.hammingDistance(x, y), expected_output);
}

TEST(HammingDistance, test_2) {
  const int x = 1;
  const int y = 3;
  const int expected_output = 1;

  Solution solution;
  EXPECT_EQ(solution.hammingDistance(x, y), expected_output);
}

TEST(HammingDistance, test_3) {
  const int x = 3;
  const int y = 3;
  const int expected_output = 0;

  Solution solution;
  EXPECT_EQ(solution.hammingDistance(x, y), expected_output);
}
