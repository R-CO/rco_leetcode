/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_110_BALANCED_BINARY_TREE_HPP
#define RCO_LEETCODE_SRC_EASY_110_BALANCED_BINARY_TREE_HPP

#include <algorithm>
#include <cmath>
#include <vector>

namespace balanced_binary_tree {

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};
class Solution {
 public:
  bool isBalanced(TreeNode* root) {
    bool is_balanced = true;

    calculateTreeHegith(root, is_balanced);

    return is_balanced;
  }

 private:
  int calculateTreeHegith(TreeNode* root, bool& is_balanced) {
    if (root == nullptr) {
      return 0;
    }

    int height_of_sub_tree_left = 0;
    if (root->left != nullptr) {
      height_of_sub_tree_left =
          calculateTreeHegith(root->left, is_balanced) + 1;
    }

    int height_of_sub_tree_right = 0;
    if (root->right != nullptr) {
      height_of_sub_tree_right =
          calculateTreeHegith(root->right, is_balanced) + 1;
    }

    if (std::abs(height_of_sub_tree_left - height_of_sub_tree_right) > 1) {
      is_balanced = false;
    }

    return std::max<int>(height_of_sub_tree_left, height_of_sub_tree_right);
  }
};

} // end of namespace balanced_binary_tree

#endif  // end of define RCO_LEETCODE_SRC_EASY_110_BALANCED_BINARY_TREE_HPP
