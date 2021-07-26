/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_838_PUSH_DOMINOES_HPP
#define RCO_LEETCODE_SRC_MEDIUM_838_PUSH_DOMINOES_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct test_case {
  string input;
  string expected_output;
};

class Solution {
 public:
  string pushDominoes(string dominoes) {
    const int dominoes_count_ = static_cast<int>(dominoes.size());
    string next_second_dominoes(dominoes);
    bool stop = false;

    while (!stop) {
      stop = true;

      for (int i = 0; i < dominoes_count_; ++i) {
        if (dominoes[i] == 'R' && (i + 1) < dominoes_count_) {
          if (dominoes[i + 1] == '.') {
            if ((i + 2) < dominoes_count_) {
              if (dominoes[i + 2] != 'L') {
                next_second_dominoes[i + 1] = 'R';
                stop = false;
              }
            } else {
              next_second_dominoes[i + 1] = 'R';
              stop = false;
            }
          }
        } else if (dominoes[i] == 'L' && (i - 1) >= 0) {
          if (dominoes[i - 1] == '.') {
            if ((i - 2) >= 0) {
              if (dominoes[i - 2] != 'R') {
                next_second_dominoes[i - 1] = 'L';
                stop = false;
              }
            } else {
              next_second_dominoes[i - 1] = 'L';
              stop = false;
            }
          }
        }
      }

      dominoes = next_second_dominoes;
    }

    return dominoes;
  }
};

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_838_PUSH_DOMINOES_HPP
