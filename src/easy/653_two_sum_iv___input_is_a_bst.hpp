/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_653_TWO_SUM_IV___INPUT_IS_A_BST_HPP
#define RCO_LEETCODE_SRC_EASY_653_TWO_SUM_IV___INPUT_IS_A_BST_HPP

#include <unordered_set>

namespace two_sum_iv___input_is_a_bst {

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
public:
    bool findTarget(TreeNode* root, int k) {
        std::unordered_set<int> diff_set;
        return preorderTraversal(root, k, diff_set);
    }
  
    bool preorderTraversal(TreeNode* root, int k, std::unordered_set<int> &diff_set) {
      if (root == nullptr) {
        return false;
      }
      
      if (diff_set.find(k - root->val) != diff_set.end()) {
        return true;
      }
      
      diff_set.insert(root->val);
      if (preorderTraversal(root->left, k, diff_set) == true) {
        return true;
      }
      
      if (preorderTraversal(root->right, k, diff_set) == true) {
        return true;
      }
      
      return false;
    }
};

} // end of namespace two_sum_iv___input_is_a_bst

#endif  // end of define RCO_LEETCODE_SRC_EASY_653_TWO_SUM_IV___INPUT_IS_A_BST_HPP