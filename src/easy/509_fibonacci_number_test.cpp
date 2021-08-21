/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "509_fibonacci_number.hpp"
using namespace fibonacci_number;

#include <gtest/gtest.h>

TEST(FibonacciNumber, example1) {
  int input = 2;
  int expected_out = 1;

  Solution solution;
  EXPECT_EQ(solution.fib(input), expected_out);
}

TEST(FibonacciNumber, example2) {
  int input = 3;
  int expected_out = 2;

  Solution solution;
  EXPECT_EQ(solution.fib(input), expected_out);
}

TEST(FibonacciNumber, n_4) {
  int input = 4;
  int expected_out = 3;

  Solution solution;
  EXPECT_EQ(solution.fib(input), expected_out);
}

TEST(FibonacciNumber, n_5) {
  int input = 5;
  int expected_out = 5;

  Solution solution;
  EXPECT_EQ(solution.fib(input), expected_out);
}

TEST(FibonacciNumber, n_6) {
  int input = 6;
  int expected_out = 8;

  Solution solution;
  EXPECT_EQ(solution.fib(input), expected_out);
}

TEST(FibonacciNumber, n_7) {
  int input = 7;
  int expected_out = 13;

  Solution solution;
  EXPECT_EQ(solution.fib(input), expected_out);
}
