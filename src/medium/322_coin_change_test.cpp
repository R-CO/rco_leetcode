/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "322_coin_change.hpp"
using namespace coin_change;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

TEST(CoinChange, test_1) {
  std::vector coins = {1, 2, 5};
  constexpr int amount = 11;

  Solution solution;
  EXPECT_EQ(solution.coinChange(coins, amount), 3);
}

TEST(CoinChange, test_2) {
  std::vector coins = {2};
  constexpr int amount = 3;

  Solution solution;
  EXPECT_EQ(solution.coinChange(coins, amount), -1);
}

TEST(CoinChange, test_3) {
  std::vector coins = {1};
  constexpr int amount = 0;

  Solution solution;
  EXPECT_EQ(solution.coinChange(coins, amount), 0);
}
