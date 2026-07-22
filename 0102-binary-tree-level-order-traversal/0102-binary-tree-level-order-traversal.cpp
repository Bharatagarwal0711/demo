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
            
            int size = q.size();

            vector<int> v;

            while(size){
                v.push_back(q.front()->val);
                if(q.front()->left != NULL) q.push(q.front()->left);
                if(q.front()->right != NULL) q.push(q.front()->right);

                q.pop();
                size--;
            }
            if(v.size()>0) ans.push_back(v);

        }


    }
};