/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_2085_COUNT_COMMON_WORDS_WITH_ONE_OCCURRENCE_HPP
#define RCO_LEETCODE_SRC_EASY_2085_COUNT_COMMON_WORDS_WITH_ONE_OCCURRENCE_HPP

#include <string>
#include <unordered_map>
#include <vector>

namespace count_common_words_with_one_occurrence {
class Solution {
 public:
  int countWords(std::vector<std::string>& words1,
                 std::vector<std::string>& words2) {
    int count = 0;

    std::unordered_map<std::string, int> words1_count_map;
    std::unordered_map<std::string, int> words2_count_map;

    for (const auto& word : words1) {
      ++words1_count_map[word];
    }

    for (const auto& word : words2) {
      ++words2_count_map[word];
    }

    for (const auto& words1_it : words1_count_map) {
      if (words1_it.second != 1) {
        continue;
      }

      if (words2_count_map.find(words1_it.first) != words2_count_map.end() &&
          words2_count_map[words1_it.first] == 1) {
        ++count;
      }
    }

    return count;
  }
};

}  // end of namespace count_common_words_with_one_occurrence

#endif  // end of define
        // RCO_LEETCODE_SRC_EASY_2085_COUNT_COMMON_WORDS_WITH_ONE_OCCURRENCE_HPP