/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "915_partition_array_into_disjoint_intervals.hpp"

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(PartitionArrayIntoDisjointIntervals, case_1) {
  vector<int> input = {5, 0, 3, 8, 6};
  const int expected_out = 3;

  Solution solution;
  EXPECT_EQ(solution.partitionDisjoint(input), expected_out);
}

TEST(PartitionArrayIntoDisjointIntervals, case_2) {
  vector<int> input = {1, 1, 1, 0, 6, 1, 2};
  const int expected_out = 4;

  Solution solution;
  EXPECT_EQ(solution.partitionDisjoint(input), expected_out);
}

TEST(PartitionArrayIntoDisjointIntervals, case_3) {
  vector<int> input = {1, 1, 3, 0, 6, 4, 5};
  const int expected_out = 4;

  Solution solution;
  EXPECT_EQ(solution.partitionDisjoint(input), expected_out);
}

TEST(PartitionArrayIntoDisjointIntervals, case_4) {
  vector<int> input = {32, 57, 24, 19, 0, 24, 49, 67, 87, 87};
  const int expected_out = 7;

  Solution solution;
  EXPECT_EQ(solution.partitionDisjoint(input), expected_out);
}
