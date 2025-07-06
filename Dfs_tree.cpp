#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// DFS function
void dfs(TreeNode* node, vector<int>& result) {
    if (node == nullptr) return;

    // Visit the root
    result.push_back(node->val);

    // Recurse on the left subtree
    dfs(node->left, result);

    // Recurse on the right subtree
    dfs(node->right, result);
}

// Helper to run DFS and get the result
vector<int> dfsTraversal(TreeNode* root) {
    vector<int> result;
    dfs(root, result);
    return result;
}

// Sample usage
int main() {
    // Constructing the tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> traversal = dfsTraversal(root);

    cout << "DFS Preorder Traversal: ";
    for (int val : traversal) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
