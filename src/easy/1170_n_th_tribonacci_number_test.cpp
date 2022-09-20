/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "1170_n_th_tribonacci_number.hpp"
using namespace n_th_fibonacci_number;

#include <gtest/gtest.h>

TEST(NthTribonacciNumber, n_1) {
  constexpr int input = 1;
  constexpr int expected_out = 1;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_2) {
  constexpr int input = 2;
  constexpr int expected_out = 1;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_3) {
  constexpr int input = 3;
  constexpr int expected_out = 2;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_4) {
  constexpr int input = 4;
  constexpr int expected_out = 4;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_5) {
  constexpr int input = 5;
  constexpr int expected_out = 7;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_6) {
  constexpr int input = 6;
  constexpr int expected_out = 13;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_7) {
  constexpr int input = 7;
  constexpr int expected_out = 24;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_8) {
  constexpr int input = 8;
  constexpr int expected_out = 44;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_25) {
  constexpr int input = 25;
  constexpr int expected_out = 1389537;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}

TEST(NthTribonacciNumber, n_37) {
  constexpr int input = 37;
  constexpr int expected_out = 2082876103;

  Solution solution;
  EXPECT_EQ(solution.tribonacci(input), expected_out);
}
