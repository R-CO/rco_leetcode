/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_134_GAS_STATION_HPP
#define RCO_LEETCODE_SRC_MEDIUM_134_GAS_STATION_HPP

#include <vector>

namespace gas_station {

#define BRUTE_FORCE 0

#if BRUTE_FORCE
class Solution {
 public:
  int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
    int answer = -1;

    std::vector<int> diff(gas.size(), 0);
    for (size_t i = 0; i < diff.size(); ++i) {
      diff[i] = gas[i] - cost[i];
    }

    for (size_t i = 0; i < diff.size(); ++i) {
      auto j = i;
      bool is_pass = true;
      size_t count = 0;
      int remain = 0;
      while (count < diff.size()) {
        int sum = diff[j++] + remain;
        if (sum < 0) {
          is_pass = false;
          break;
        }
        remain = sum;
        if (j == diff.size()) {
          j = 0;
        }
        ++count;
      }

      if (is_pass) {
        answer = static_cast<int>(i);
      }
    }

    return answer;
  }
};

#else

class Solution {
 public:
  int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
    int begin_index = 0;
    int sum = 0;
    int remainder = 0;

    for (size_t i = 0; i < gas.size(); ++i) {
      sum += gas[i] - cost[i];
      if (sum < 0) {
        begin_index = static_cast<int>(i) + 1;
        remainder += sum;
        sum = 0;
      }
    }

    if (sum + remainder < 0) {
      begin_index = -1;
    }

    return begin_index;
  }
};

#endif

}  // end of namespace gas_station

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_134_GAS_STATION_HPP