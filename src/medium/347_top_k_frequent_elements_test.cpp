/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "347_top_k_frequent_elements.hpp"
using namespace top_k_frequent_elements;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(TopKFrequentElements, test_1) {
  vector<int> nums = {1, 1, 1, 2, 2, 3};
  constexpr int k = 2;

  Solution solution;
  auto vec = solution.topKFrequent(nums, k);
}

TEST(TopKFrequentElements, test_2) {
  vector<int> nums = {1};
  constexpr int k = 1;

  Solution solution;
  auto vec = solution.topKFrequent(nums, k);
}

TEST(TopKFrequentElements, test_3) {
  vector<int> nums = {-1, -1};
  constexpr int k = 1;

  Solution solution;
  auto vec = solution.topKFrequent(nums, k);
}
