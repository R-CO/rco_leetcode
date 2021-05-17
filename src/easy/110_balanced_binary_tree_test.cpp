#include "110_balanced_binary_tree.hpp"

#include <gtest/gtest.h>

#ifdef null
#define orig_null null
#undef null
#endif

#define null -1

class BinaryTree {
 public:
  BinaryTree(int arry[], const size_t arr_size, const int null_val)
      : root(nullptr), null_val_(null_val) {
    root = insertLevelOrder(arry, arr_size, root, 0);
  }

  ~BinaryTree() { releaseTree(root); }

  TreeNode* root;

 private:
  // Function to insert nodes in level order
  TreeNode* insertLevelOrder(int arry[], int arr_size, TreeNode* root, int i) {
    if (arry[i] == null_val_) {
      return root;
    }

    // Base case for recursion
    if (i < arr_size) {
      TreeNode* temp = new TreeNode(arry[i]);
      root = temp;

      // insert left child
      root->left = insertLevelOrder(arry, arr_size, root->left, 2 * i + 1);

      // insert right child
      root->right = insertLevelOrder(arry, arr_size, root->right, 2 * i + 2);
    }
    return root;
  }

  void releaseTree(TreeNode* root) {
    if (root == nullptr) {
      return;
    }

    if (root->left != nullptr) {
      releaseTree(root->left);
    }

    if (root->right != nullptr) {
      releaseTree(root->right);
    }

    delete root;
  }

  const int null_val_;
};

TEST(BalancedBinaryTree, example1) {
  // int input[] = {3, 9, 20, null, null, 15, 7};
  // const auto expected_out = true;

  // BinaryTree tree{input, sizeof(input) / sizeof(input[0]), null};

  // Solution solution;
  // EXPECT_EQ(solution.isBalanced(tree.root), expected_out);
}

TEST(BalancedBinaryTree, example2) {
  // int input[] = {1, 2, 2, 3, 3, null, null, 4, 4};
  // const auto expected_out = true;

  // BinaryTree tree{input, sizeof(input) / sizeof(input[0]), null};

  // Solution solution;
  // EXPECT_EQ(solution.isBalanced(tree.root), expected_out);
}

TEST(BalancedBinaryTree, example3) {
  // int input[] = {};
  // const auto expected_out = true;

  // BinaryTree tree{input, sizeof(input) / sizeof(input[0]), null};

  // Solution solution;
  // EXPECT_EQ(solution.isBalanced(tree.root), expected_out);
}

TEST(BalancedBinaryTree, case88) {
  // int input[] = {1, null, 2, null, 3};
  // const auto expected_out = false;

  // BinaryTree tree{input, sizeof(input) / sizeof(input[0]), null};

  // Solution solution;
  // EXPECT_EQ(solution.isBalanced(tree.root), expected_out);
}

#undef null

#ifdef orig_null
#define null orig_null
#endif
