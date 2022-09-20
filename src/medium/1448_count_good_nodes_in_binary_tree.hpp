/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_1448_COUNT_GOOD_NODES_IN_BINARY_TREE_HPP
#define RCO_LEETCODE_SRC_MEDIUM_1448_COUNT_GOOD_NODES_IN_BINARY_TREE_HPP

#include <algorithm>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

namespace count_good_nodes_in_binary_tree {
class Solution {
 public:
  int goodNodes(TreeNode *root) {
    int good_nodes_count = 0;
    preorderTraversalCount(root, kMinNodeValue_, good_nodes_count);

    return good_nodes_count;
  }

 private:
  void preorderTraversalCount(TreeNode *root, int current_max_value,
                             int &good_nodes_count) {
    if (root == nullptr) {
      return;
    }

    if (current_max_value <= root->val) {
      ++good_nodes_count;
      current_max_value = root->val;
    }

    preorderTraversalCount(root->left, current_max_value, good_nodes_count);
    preorderTraversalCount(root->right, current_max_value, good_nodes_count);
  }

  static constexpr int kMinNodeValue_ = -10000;
  static constexpr int kMaxNodeValue_ = 10000;
};

}  // end of namespace count_good_nodes_in_binary_tree

#endif  // end of define
        // RCO_LEETCODE_SRC_MEDIUM_1448_COUNT_GOOD_NODES_IN_BINARY_TREE_HPP