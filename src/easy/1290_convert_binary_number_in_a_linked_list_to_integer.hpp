/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_1290_CONVERT_BINARY_1290_IN_A_LINKED_LIST_TO_INTEGER_HPP
#define RCO_LEETCODE_SRC_EASY_1290_CONVERT_BINARY_NUMBER_IN_A_LINKED_LIST_TO_INTEGER_HPP

namespace convert_binary_number_in_a_linked_list_to_integer {

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
 public:
  int getDecimalValue(ListNode* head) {
    int value = 0;

    while (head != nullptr) {
      value = (value << 1) | head->val;
      head = head->next;
    }

    return value;
  }
};

}  // end of namespace convert_binary_number_in_a_linked_list_to_integer

#endif  // end of define
        // RCO_LEETCODE_SRC_EASY_NUMBER_CONVERT_BINARY_NUMBER_IN_A_LINKED_LIST_TO_INTEGER_HPP