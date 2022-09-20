/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "2085_count_common_words_with_one_occurrence.hpp"
using namespace count_common_words_with_one_occurrence;

#include <gtest/gtest.h>

#include <string>
#include <vector>
using namespace std;

TEST(CountCommonWordsWithOneOccurrence, test_1) {
  const vector<string> words1 = {"leetcode", "is", "amazing", "as", "is"};
  const vector<string> words2 = {"amazing", "leetcode", "is"};
  constexpr int expected_output = 2;

  Solution solution;
  EXPECT_EQ(solution.countWords(const_cast<vector<string> &>(words1),
                                const_cast<vector<string> &>(words2)),
            expected_output);
}

TEST(CountCommonWordsWithOneOccurrence, test_2) {
  const vector<string> words1 = {"b","bb","bbb"};
  const vector<string> words2 = {"a","aa","aaa"};
  constexpr int expected_output = 0;

  Solution solution;
  EXPECT_EQ(solution.countWords(const_cast<vector<string> &>(words1),
                                const_cast<vector<string> &>(words2)),
            expected_output);
}

TEST(CountCommonWordsWithOneOccurrence, test_3) {
  const vector<string> words1 = {"a","ab"};
  const vector<string> words2 = {"a","a","a","ab"};
  constexpr int expected_output = 1;

  Solution solution;
  EXPECT_EQ(solution.countWords(const_cast<vector<string> &>(words1),
                                const_cast<vector<string> &>(words2)),
            expected_output);
}
