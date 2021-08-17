/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_1701_AVERAGE_WAITING_TIME_HPP
#define RCO_LEETCODE_SRC_MEDIUM_1701_AVERAGE_WAITING_TIME_HPP

#include <algorithm>
#include <vector>

namespace average_waiting_time {
class Solution {
 public:
  double averageWaitingTime(std::vector<std::vector<int>>& customers) {
    size_t total_waiting_time = 0;
    int chef_idle_time = 0;

    for (size_t i = 0; i < customers.size(); ++i) {
      int partial_waiting_time = 0;
      int pre_waiting_time = std::max(chef_idle_time - customers[i][0], 0);
      chef_idle_time = std::max(chef_idle_time, customers[i][0]);
      for (size_t j = i; j < customers.size(); ++j) {
        if (customers[j][0] != customers[i][0]) {
          break;
        }

        i = j;
        partial_waiting_time += customers[j][1];
        chef_idle_time += customers[j][1];
        total_waiting_time += pre_waiting_time + partial_waiting_time;
      }
    }

    return static_cast<double>(total_waiting_time) / customers.size();
  }
};

}  // end of namespace average_waiting_time

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_1701_AVERAGE_WAITING_TIME_HPP