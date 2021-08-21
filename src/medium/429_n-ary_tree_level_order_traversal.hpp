/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_MEDIUM_429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_HPP
#define RCO_LEETCODE_SRC_MEDIUM_429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_HPP

#include <queue>
#include <vector>

#define METHOD_1 0
#define METHOD_2 1

namespace n_ary_tree_level_order_traversal {

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Node {
 public:
  int val;
  std::vector<Node *> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, std::vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

#if METHOD_1

class Solution {
 public:
  std::vector<std::vector<int>> levelOrder(Node *root) {
    int level = 0;
    std::vector<std::vector<Node *>> node_2d_vector = {{root}};
    std::vector<std::vector<int>> output;

    while (level < node_2d_vector.size()) {
      std::vector<int> values;
      std::vector<Node *> nodes;
      bool need_emplace_back_nodes = false;
      for (auto &node : node_2d_vector[level]) {
        if (node == nullptr) {
          continue;
        }
        values.push_back(node->val);
        for (auto &children : node->children) {
          nodes.emplace_back(children);
        }
        need_emplace_back_nodes = true;
      }
      if (values.empty() == false) {
        output.emplace_back(values);
      }
      if (need_emplace_back_nodes) {
        node_2d_vector.emplace_back(nodes);
      }
      ++level;
    }

    return output;
  }
};

#endif

#if METHOD_2

struct NodeWithLevel {
  NodeWithLevel(Node *node_, int level_) : node(node_), level(level_) {}

  Node *node;
  int level;
};

class Solution {
 public:
  std::vector<std::vector<int>> levelOrder(Node *root) {
    if (root == nullptr) {
      return {};
    }

    constexpr int level = 0;
    std::vector<std::vector<int>> output;
    std::queue<NodeWithLevel> queue;
    queue.push({root, level});
    while (!queue.empty()) {
      auto node_with_level = queue.front();
      queue.pop();
      if (output.size() == static_cast<size_t>(node_with_level.level)) {
        output.emplace_back(std::vector<int>());
      }
      output[node_with_level.level].push_back(node_with_level.node->val);
      auto child_level = node_with_level.level + 1;
      for (auto child : node_with_level.node->children) {
        if (child == nullptr) {
          continue;
        }
        queue.push({child, child_level});
      }
    }
    return output;
  }
};
#endif

}  // end of namespace n_ary_tree_level_order_traversal

#endif  // end of define
        // RCO_LEETCODE_SRC_MEDIUM_429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_HPP