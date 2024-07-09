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


    TreeNode* makeTree(const vector<int>& preorder, int preStart, int preEnd,const vector<int>& inorder, int inStart, int inEnd, map<int,int>&mpp){
        if(preStart > preEnd || inStart > inEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preStart]);
        //inroot is the index , which separates the left and right binary tree in inorder
        int inRoot = mpp[root->val];
        int numsLeft = inRoot - inStart;

        root -> left = makeTree(preorder, preStart+1,preStart+numsLeft, inorder, inStart, inRoot-1, mpp);
        root -> right = makeTree(preorder, preStart + numsLeft + 1, preEnd, inorder, inRoot+1, inEnd, mpp);

        return root;
    }


    //steps
    //pehle map the inorder, taaki easy in finding
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]] = i;
        }
        //preStart and inStart at 0;
        //preEnd and inEnd at sizes()-1;
        TreeNode* root = makeTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, mpp);
        return root;
    }
};