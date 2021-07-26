/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_838_PUSH_DOMINOES_HPP
#define RCO_LEETCODE_SRC_MEDIUM_838_PUSH_DOMINOES_HPP

#include <string>
using std::string;
#include <vector>
using std::vector;

#define BRUTE_FORCE 0

#if BRUTE_FORCE

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

#else  // Not BRUTE_FORCE

class Solution {
 public:
  string pushDominoes(string dominoes) {
    const size_t dominoes_count = dominoes.size();
    vector<int> force_vector(dominoes_count, 0);

    const int force_max = static_cast<int>(dominoes_count);

    int force = 0;
    auto force_vector_it = force_vector.begin();
    for (auto it = dominoes.begin(); it != dominoes.end(); ++it) {
      if (*it == 'R') {
        force = force_max;
      } else if (*it == 'L') {
        force = 0;
      } else {
        if (force != 0) {
          --force;
        }
      }
      *force_vector_it++ += force;
    }

    force = 0;
    auto force_vector_reverse_it = force_vector.rbegin();
    for (auto it = dominoes.rbegin(); it != dominoes.rend(); ++it) {
      if (*it == 'L') {
        force = force_max;
      } else if (*it == 'R') {
        force = 0;
      } else {
        if (force != 0) {
          --force;
        }
      }
      *force_vector_reverse_it++ -= force;
    }

    for (size_t i = 0; i < dominoes_count; ++i) {
      if (force_vector[i] > 0) {
        dominoes[i] = 'R';
      } else if (force_vector[i] == 0) {
        dominoes[i] = '.';
      } else {
        dominoes[i] = 'L';
      }
    }

    return dominoes;
  }
};

#endif

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_838_PUSH_DOMINOES_HPP
