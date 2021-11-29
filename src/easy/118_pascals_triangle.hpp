/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_118_PASCALS_TRIANGLE_HPP
#define RCO_LEETCODE_SRC_EASY_118_PASCALS_TRIANGLE_HPP

#include <vector>

namespace pascals_triangle {
class Solution {
 public:
  std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> output = {{1}};
    if (numRows == 1) {
      return output;
    }
    output.push_back({1, 1});
    if (numRows == 2) {
      return output;
    }

    for (size_t i = 2; i < static_cast<size_t>(numRows); ++i) {
      output.push_back(std::vector<int>(i + 1, 1));
      for (size_t j = 1; j < i; ++j) {
        output[i][j] = output[i - 1][j - 1] + output[i - 1][j];
      }
    }

    return output;
  }
};

}  // end of namespace pascals_triangle

#endif  // end of define RCO_LEETCODE_SRC_EASY_118_PASCALS_TRIANGLE_HPP
