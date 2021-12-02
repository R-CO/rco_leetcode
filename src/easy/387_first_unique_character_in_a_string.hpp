/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_387_FIRST_UNIQUE_CHARACTER_IN_A_STRING_HPP
#define RCO_LEETCODE_SRC_EASY_387_FIRST_UNIQUE_CHARACTER_IN_A_STRING_HPP

#ifdef __GNUC__
#pragma GCC optimize("Ofast")
#endif

#include <iostream>
static auto _ = []() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return 0;
}();

#include <string>

namespace first_unique_character_in_a_string {
class Solution {
 public:
  int firstUniqChar(std::string s) {
    int history['z' + 1] = {0};
    for (const auto c : s) {
      ++history[c];
    }

    for (size_t i = 0; i < s.size(); ++i) {
      if (history[s[i]] == 1) {
        return static_cast<int>(i);
      }
    }

    return -1;
  }
};

}  // end of namespace first_unique_character_in_a_string

#endif  // end of define
        // RCO_LEETCODE_SRC_EASY_387_FIRST_UNIQUE_CHARACTER_IN_A_STRING_HPP