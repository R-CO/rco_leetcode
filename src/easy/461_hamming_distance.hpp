/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_461_HAMMING_DISTANCE_HPP
#define RCO_LEETCODE_SRC_EASY_461_HAMMING_DISTANCE_HPP

namespace hamming_distance {
class Solution {
 public:
  int hammingDistance(int x, int y) {
    if (x == y) {
      return 0;
    }

    int count = 0;
    constexpr int kHighestBit = 31;
    for (int i = 0; i < kHighestBit; ++i) {
      //   static auto bitValue = [](const int in, const int bit) {
      //     return ((in & (1 << bit)) >> bit);
      //   };
      count += ((x & (1 << i)) >> i) ^ ((y & (1 << i)) >> i);
      //   count += bitValue(x, i) ^ bitValue(y, i);
    }

    return count;
  }
};

}  // end of namespace hamming_distance

#endif  // end of define RCO_LEETCODE_SRC_EASY_461_HAMMING_DISTANCE_HPP