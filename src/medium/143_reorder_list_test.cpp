/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "143_reorder_list.hpp"
using namespace reorder_list;

#include <gtest/gtest.h>

#include <vector>
using std::vector;

ListNode *createList(const vector<int> &vec) {
  ListNode temp;
  ListNode *head = &temp;
  for (auto val : vec) {
    head->next = new ListNode(val);
    head = head->next;
  }

  head = temp.next;
  return head;
}

void printList(ListNode *head) {
  for (; head != nullptr; head = head->next) {
    printf("head->val = [%d]\n", head->val);
  }
}

TEST(ReorderList, test_1) {
  const vector<int> input = {1, 2, 3, 4};
  auto head = createList(input);

  printList(head);

  Solution solution;
  solution.reorderList(head);

  printList(head);
}

TEST(ReorderList, test_2) {
  const vector<int> input = {1, 2, 3, 4, 5};
  auto head = createList(input);

  printList(head);

  Solution solution;
  solution.reorderList(head);

  printList(head);
}

TEST(ReorderList, test_3) {
  const vector<int> input = {1};
  auto head = createList(input);

  printList(head);

  Solution solution;
  solution.reorderList(head);

  printList(head);
}
