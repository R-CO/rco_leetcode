/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_322_COIN_CHANGE_HPP
#define RCO_LEETCODE_SRC_MEDIUM_322_COIN_CHANGE_HPP

#include <algorithm>
#include <limits>
#include <vector>

namespace coin_change {
class Solution {
 public:
  int coinChange(std::vector<int>& coins, int amount) {
    if (amount == 0) {
      return 0;
    }

    std::vector<uint64_t> fewest_coins(static_cast<int>(amount + 1),
                                  std::numeric_limits<uint32_t>::max()); // fewest coins of each amount
    fewest_coins[0] = 0;

    for (size_t i = 0; i < coins.size(); ++i) {
      for (size_t coin_value = coins[i]; coin_value < fewest_coins.size(); ++coin_value) {
        size_t remainder = coin_value - coins[i];
        fewest_coins[coin_value] =
            std::min(fewest_coins[coin_value], fewest_coins[remainder] + 1);
      }
    }

    return (fewest_coins[amount] != std::numeric_limits<uint32_t>::max())
               ? static_cast<int>(fewest_coins[amount])
               : -1;
  }
};

}  // end of namespace coin_change

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_322_COIN_CHANGE_HPP