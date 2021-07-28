/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "852_peak_index_in_a_mountain_array.hpp"
using namespace peak_index_in_a_mountain_array;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(PeakIndexInAMountainArray, example_1) {
  std::vector<int> arr = {0, 1, 0};
  constexpr int expected_out = 1;

  Solution solution;
  EXPECT_EQ(solution.peakIndexInMountainArray(arr), expected_out);
}

TEST(PeakIndexInAMountainArray, example_2) {
  std::vector<int> arr = {0,2,1,0};
  constexpr int expected_out = 1;

  Solution solution;
  EXPECT_EQ(solution.peakIndexInMountainArray(arr), expected_out);
}

TEST(PeakIndexInAMountainArray, example_3) {
  std::vector<int> arr = {0,10, 5,2};
  constexpr int expected_out = 1;

  Solution solution;
  EXPECT_EQ(solution.peakIndexInMountainArray(arr), expected_out);
}

TEST(PeakIndexInAMountainArray, example_4) {
  std::vector<int> arr = {3, 4, 5, 1};
  constexpr int expected_out = 2;

  Solution solution;
  EXPECT_EQ(solution.peakIndexInMountainArray(arr), expected_out);
}

TEST(PeakIndexInMountainArray, example_5) {
  std::vector<int> input = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
  constexpr int expected_output = 2;

  Solution solution;
  EXPECT_EQ(solution.peakIndexInMountainArray(input), expected_output);
}
