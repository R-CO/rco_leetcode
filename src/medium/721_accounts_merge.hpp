/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_721_ACCOUNTS_MERGE_HPP
#define RCO_LEETCODE_SRC_MEDIUM_721_ACCOUNTS_MERGE_HPP

#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace accounts_merge {
class Solution {
 public:
  std::vector<std::vector<std::string>> accountsMerge(
      std::vector<std::vector<std::string>> &accounts) {
    std::vector<std::vector<std::string>> result;

    std::unordered_map<std::string, std::vector<std::set<std::string>>>
        name_map_account_vector;
    std::unordered_map<std::string, std::unordered_map<std::string, size_t>>
        name_map_email_map;

    for (const auto &account : accounts) {
      const auto &name = account[0];
      if (name_map_email_map.find(name) == name_map_email_map.end()) {
        name_map_account_vector.insert({name, {}});
        name_map_account_vector[name].push_back({});
        auto &email_set = name_map_account_vector[name][0];
        name_map_email_map.insert({name, {}});
        auto &email_map = name_map_email_map[name];
        for (size_t i = 1ul; i < account.size(); ++i) {
          email_set.insert(account[i]);
          email_map.insert({account[i], 0ul});
        }
        continue;
      }

      bool is_new_account = true;
      size_t index = name_map_account_vector[name].size();
      for (size_t i = 1ul; i < account.size(); ++i) {
        if (name_map_email_map[name].count(account[i]) > 0) {
          is_new_account = false;
          index = name_map_email_map[name][account[i]];
          break;
        }
      }

      if (is_new_account == true) {
        name_map_account_vector[name].push_back({});
      }
      auto &email_set = name_map_account_vector[name][index];
      for (size_t i = 1ul; i < account.size(); ++i) {
        email_set.insert(account[i]);
      }
    }

    for (const auto &it : name_map_account_vector) {
      const auto &name = it.first;
      const auto &account_vector = it.second;
      for (const auto &email_set : account_vector) {
        result.push_back({});
        auto &account = result.back();
        account.emplace_back(name);
        for (const auto &email : email_set) {
          account.emplace_back(email);
        }
      }
    }

    return result;
  }
};

}  // end of namespace accounts_merge

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_721_ACCOUNTS_MERGE_HPP