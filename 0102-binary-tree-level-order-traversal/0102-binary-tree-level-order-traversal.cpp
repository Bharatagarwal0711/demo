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

    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }

    void nthLevel(TreeNode* root,int currLevel,int level,vector<vector<int>> &ans){
        if(root == NULL) return;
        if(currLevel == level){
            ans[currLevel].push_back(root->val);
        }

        nthLevel(root->left,currLevel+1,level,ans);
        nthLevel(root->right,currLevel+1,level,ans);
    }


    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n);
        if(n == 0) return ans;

        for(int i=0;i<n;i++)   nthLevel(root,0,i,ans);
        

        return ans;
    }
};