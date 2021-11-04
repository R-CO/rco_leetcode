/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_404_SUM_OF_LEFT_LEAVES_HPP
#define RCO_LEETCODE_SRC_EASY_404_SUM_OF_LEFT_LEAVES_HPP

namespace sum_of_left_leaves {

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

class Solution {
  enum class IsLeftNode { left_node, not_left_node };

 public:
  int sumOfLeftLeaves(TreeNode *root) {
    int sum = 0;

    doSumOfLeftLeaves(root, IsLeftNode::not_left_node, sum);

    return sum;
  }

 private:
  void doSumOfLeftLeaves(const TreeNode *const node,
                         const IsLeftNode is_left_node, int &sum) {
    if (node == nullptr) {
      return;
    }

    if (node->left == nullptr && node->right == nullptr) {
      if (is_left_node == IsLeftNode::left_node) {
        sum += node->val;
      }
      return;
    }

    doSumOfLeftLeaves(node->left, IsLeftNode::left_node, sum);
    doSumOfLeftLeaves(node->right, IsLeftNode::not_left_node, sum);
  }
};

}  // end of namespace sum_of_left_leaves

#endif  // end of define RCO_LEETCODE_SRC_EASY_404_SUM_OF_LEFT_LEAVES_HPP