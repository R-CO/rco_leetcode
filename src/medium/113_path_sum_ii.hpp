/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_113_PATH_SUM_II_HPP
#define RCO_LEETCODE_SRC_MEDIUM_113_PATH_SUM_II_HPP

#include <vector>

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

namespace path_sum_ii {
class Solution {
 public:
  std::vector<std::vector<int>> pathSum(TreeNode *root, int targetSum) {
    std::vector<std::vector<int>> answer;
    std::vector<int> path;
    preorderTraversal(root, targetSum, path, answer);

    return answer;
  }

 private:
  void preorderTraversal(TreeNode *root, int targetSum, std::vector<int> &path,
                         std::vector<std::vector<int>> &answer) {
    if (root == nullptr) {
      return;
    }
    targetSum -= root->val;
    path.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr) {
      if (targetSum == 0) {
        answer.push_back(path);
      }
      return;
    }

    if (root->left != nullptr) {
      preorderTraversal(root->left, targetSum, path, answer);
      path.pop_back();
    }

    if (root->right != nullptr) {
      preorderTraversal(root->right, targetSum, path, answer);
      path.pop_back();
    }
  }
};

}  // end of namespace path_sum_ii

#endif  // end of define RCO_LEETCODE_SRC_MEDIUM_113_PATH_SUM_II_HPP