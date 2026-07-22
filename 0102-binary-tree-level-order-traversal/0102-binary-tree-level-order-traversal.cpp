class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        helper(root,ans);
        return ans;
    }
    void helper(TreeNode* root, vector<vector<int>> &ans){

        if(root == NULL) return;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            vector<int> v;
            queue<TreeNode*> temp;

            while(!q.empty()){
                v.push_back(q.front()->val);
                if(q.front()->left != NULL) temp.push(q.front()->left);
                if(q.front()->right != NULL) temp.push(q.front()->right);

                q.pop();
            }
            if(v.size()>0) ans.push_back(v);

            q = temp;

        }


    }
};