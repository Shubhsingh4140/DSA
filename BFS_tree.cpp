/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        queue<TreeNode*> qp;
        qp.push(root);
     vector<vector<int>> result;
        while(!qp.empty()){
            int size=qp.size();
            vector<int> res;
            for(int i=0;i<size;i++){
                TreeNode *node=qp.front();
                int val=node->val;
                res.push_back(val);
                if(node->left){
                    qp.push(node->left);
                }
                 if(node->right){
                    qp.push(node->right);
                }
                qp.pop();

            }
                result.push_back(res);
            
          
        }

        return result;
    }
};
