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

    //recursion

    // vector<int> ans;
    // void inorder(TreeNode* root){
    //     if(root == nullptr){
    //         return;
    //     }
    //     inorder(root->left);
    //     ans.push_back(root->val);
    //     inorder(root->right);
    // }


    //morris traversal
    vector<int>ans;
    void inorder(TreeNode* root){
        TreeNode* cur = root;
        while(cur != NULL){
            if(cur -> left == NULL){
                ans.push_back(cur->val);
                cur = cur -> right;
            }
            else{
                TreeNode* prev = cur -> left;
                while(prev -> right && prev -> right != cur){
                    prev = prev -> right;
                }
                if(prev -> right == NULL){
                    prev -> right = cur;
                    cur = cur -> left;
                }
                else{
                    prev -> right = NULL;
                    ans.push_back(cur->val);
                    cur = cur -> right;
                }
            }
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};