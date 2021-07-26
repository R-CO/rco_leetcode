/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "838_push_dominoes.hpp"

#include <gtest/gtest.h>

#include <string>
using std::string;

TEST(PushDominoes, case_1) {
  const string input = "RR.L";
  const string expected_out = "RR.L";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}

TEST(PushDominoes, case_2) {
  const string input = ".L.R...LR..L..";
  const string expected_out = "LL.RR.LLRRLL..";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}

TEST(PushDominoes, case_3) {
  const string input = "RL";
  const string expected_out = "RL";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}

TEST(PushDominoes, case_4) {
  const string input = "R.L";
  const string expected_out = "R.L";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}

TEST(PushDominoes, case_5) {
  const string input = "R....";
  const string expected_out = "RRRRR";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}

TEST(PushDominoes, case_6) {
  const string input = ".L.R...LR..L..";
  const string expected_out = "LL.RR.LLRRLL..";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}

TEST(PushDominoes, case_7) {
  const string input = "R.R...L";
  const string expected_out = "RRRR.LL";

  Solution solution;
  EXPECT_EQ(solution.pushDominoes(input), expected_out);
}
