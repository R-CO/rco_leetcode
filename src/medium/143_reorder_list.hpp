/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_143_REORDER_LIST_HPP
#define RCO_LEETCODE_SRC_MEDIUM_143_REORDER_LIST_HPP

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

namespace reorder_list {
class Solution {
 public:
  void reorderList(ListNode *head) {
    recursiveReorderList(head, head);
  }

 private:
  void recursiveReorderList(ListNode *&head, ListNode *node) {
    if (node == nullptr) {
      return;
    }

    recursiveReorderList(head, node->next);
    if (head == nullptr || head->next == nullptr) {
      return;
    } else if (head == head->next) {
      head->next = nullptr;
      head = nullptr;
      return;
    }

    node->next = head->next;
    head->next = node;
    head = node->next;
  }
};

}  // end of namespace reorder_list

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_143_REORDER_LIST_HPP