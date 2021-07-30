/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_677_MAP_SUM_PAIRS_HPP
#define RCO_LEETCODE_SRC_MEDIUM_677_MAP_SUM_PAIRS_HPP

#include <string>
#include <unordered_map>

namespace map_sum_pairs {

struct TrieNode {
  TrieNode() {}

  ~TrieNode() {
    if (data != nullptr) {
      delete[] data;
      data = nullptr;
    }
  }

  int sum = 0;
  TrieNode *data = nullptr;
};

class MapSum {
 public:
  /** Initialize your data structure here. */
  MapSum() {}

  void insert(std::string key, int val) {
    int old_val = 0;
    auto it = key_map.find(key);
    if (it != key_map.end()) {
      old_val = it->second;
      it->second = val;
    } else {
      key_map.insert(std::pair<std::string, int>(key, val));
    }

    TrieNode *ptr = data;
    for (auto ch : key) {
      ptr += ch - 'a';
      ptr->sum = ptr->sum - old_val + val;
      if (ptr->data == nullptr) {
        ptr->data = new TrieNode[26];
      }
      ptr = ptr->data;
    }
  }

  int sum(std::string prefix) {
    TrieNode *ptr = data;
    int answer = 0;
    for (auto ch : prefix) {
      ptr += ch - 'a';
      answer = ptr->sum;
      if (ptr->data == nullptr) {
        return 0;
      }
      ptr = ptr->data;
    }

    return answer;
  }

 private:
  TrieNode data[26];
  std::unordered_map<std::string, int> key_map;
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */

}  // end of namespace map_sum_pairs

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_677_MAP_SUM_PAIRS_HPP