/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "118_pascals_triangle.hpp"
using namespace pascals_triangle;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(PascalsTriangle, test_1) {
  constexpr int num_rows = 5;

  Solution solution;
  solution.generate(num_rows);
}

TEST(PascalsTriangle, test_2) {
  constexpr int num_rows = 1;

  Solution solution;
  solution.generate(num_rows);
}
