/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_709_TO_LOWER_CASE_HPP
#define RCO_LEETCODE_SRC_EASY_709_TO_LOWER_CASE_HPP

#include <string>

namespace to_lower_case {
class Solution {
 public:
  std::string toLowerCase(std::string s) {
    constexpr char diff = 'A' - 'a';
    for (auto &c : s) {
      if (c >= 'A' && c <= 'Z') {
        c -= diff;
      }
    }

    return s;
  }
};

}  // end of namespace to_lower_case

#endif  // end of define RCO_LEETCODE_SRC_EASY_709_TO_LOWER_CASE_HPP