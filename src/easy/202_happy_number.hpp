/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_202_HAPPY_202_HPP
#define RCO_LEETCODE_SRC_EASY_202_HAPPY_NUMBER_HPP

#include <unordered_set>

namespace happy_number {
class Solution {
 public:
  enum class HappyNumberDef : int { happy = 1 };

  bool isHappy(int n) {
    const int square_value[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
    std::unordered_set<int> history;

    while (history.find(n) == history.end()) {
      history.insert(n);
      n = calcSquareSumOfDigits(n, square_value);
      if (n == static_cast<int>(HappyNumberDef::happy)) {
        return true;
      }
    }

    return false;
  }

 private:
  int calcSquareSumOfDigits(const int n, const int square_value[]) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
      sum += square_value[temp % 10];
      temp /= 10;
    }
    return sum;
  }
};

}  // end of namespace happy_number

#endif  // end of define RCO_LEETCODE_SRC_EASY_NUMBER_HAPPY_NUMBER_HPP