/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "134_gas_station.hpp"
using namespace gas_station;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(GasStation, case_1) {
  vector<int> gas = {1, 2, 3, 4, 5};
  vector<int> cost = {3, 4, 5, 1, 2};
  const int expected_output = 3;

  Solution solution;
  EXPECT_EQ(solution.canCompleteCircuit(gas, cost), expected_output);
}

TEST(GasStation, case_2) {
  vector<int> gas = {2, 3, 4};
  vector<int> cost = {3, 4, 3};
  const int expected_output = -1;

  Solution solution;
  EXPECT_EQ(solution.canCompleteCircuit(gas, cost), expected_output);
}
