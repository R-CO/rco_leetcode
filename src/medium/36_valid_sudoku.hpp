/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_36_VALID_SUDOKU_HPP
#define RCO_LEETCODE_SRC_MEDIUM_36_VALID_SUDOKU_HPP

#include <vector>

namespace valid_sudoku {
class Solution {
 public:
  bool isValidSudoku(std::vector<std::vector<char>>& board) {
    bool row_used[9][10] = {false};
    bool column_used[9][10] = {false};
    bool sub_box_used[9][10] = {false};

    for (size_t i = 0; i < 9; ++i) {
      for (size_t j = 0; j < 9; ++j) {
        if (board[i][j] == '.') {
          continue;
        }

        const auto digit =
            static_cast<size_t>(board[i][j]) - static_cast<size_t>('0');
        if (!checkRowUsed(j, digit, row_used) ||
            !checkColumnUsed(i, digit, column_used) ||
            !checkSubBoxUsed(i, j, digit, sub_box_used)) {
          return false;
        }
      }
    }

    return true;
  }

 private:
  bool checkRowUsed(const size_t j, const size_t digit, bool row_used[][10]) {
    if (row_used[j][digit]) {
      return false;
    }

    row_used[j][digit] = true;
    return true;
  }

  bool checkColumnUsed(const size_t i, const size_t digit,
                       bool column_used[][10]) {
    if (column_used[i][digit]) {
      return false;
    }

    column_used[i][digit] = true;
    return true;
  }

  bool checkSubBoxUsed(const size_t i, const size_t j, const size_t digit,
                       bool sub_box_used[][10]) {
    if (i < 3) {
      if (j < 3) {
        if (sub_box_used[0][digit]) {
          return false;
        }

        sub_box_used[0][digit] = true;
      } else if (j >= 3 && j < 6) {
        if (sub_box_used[1][digit]) {
          return false;
        }
        sub_box_used[1][digit] = true;
      } else {
        if (sub_box_used[2][digit]) {
          return false;
        }
        sub_box_used[2][digit] = true;
      }
    } else if (i >= 3 && i < 6) {
      if (j < 3) {
        if (sub_box_used[3][digit]) {
          return false;
        }
        sub_box_used[3][digit] = true;
      } else if (j >= 3 && j < 6) {
        if (sub_box_used[4][digit]) {
          return false;
        }
        sub_box_used[4][digit] = true;
      } else {
        if (sub_box_used[5][digit]) {
          return false;
        }
        sub_box_used[5][digit] = true;
      }
    } else {
      if (j < 3) {
        if (sub_box_used[6][digit]) {
          return false;
        }
        sub_box_used[6][digit] = true;
      } else if (j >= 3 && j < 6) {
        if (sub_box_used[7][digit]) {
          return false;
        }
        sub_box_used[7][digit] = true;
      } else {
        if (sub_box_used[8][digit]) {
          return false;
        }
        sub_box_used[8][digit] = true;
      }
    }

    return true;
  }

#if 0
  // smaller code size
  bool checkSubBoxUsed(const size_t i, const size_t j, const size_t digit,
                       bool sub_box_used[][10]) {
    size_t sub_box_index = 0;

    if (i < 3) {
      if (j < 3) {
        sub_box_index = 0;
      } else if (j >= 3 && j < 6) {
        sub_box_index = 1;
      } else {
        sub_box_index = 2;
      }
    } else if (i >= 3 && i < 6) {
      if (j < 3) {
        sub_box_index = 3;
      } else if (j >= 3 && j < 6) {
        sub_box_index = 4;
      } else {
        sub_box_index = 5;
      }
    } else {
      if (j < 3) {
        sub_box_index = 6;
      } else if (j >= 3 && j < 6) {
        sub_box_index = 7;
      } else {
        sub_box_index = 8;
      }
    }

    if (sub_box_used[sub_box_index][digit]) {
      return false;
    }

    sub_box_used[sub_box_index][digit] = true;
    return true;
  }
#endif
};

}  // end of namespace valid_sudoku

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_36_VALID_SUDOKU_HPP