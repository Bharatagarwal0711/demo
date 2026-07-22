class Solution {
public:

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> PostOrder;
        stack<TreeNode*> st;
        if(root) st.push(root);

        while(!st.empty()){
            TreeNode* temp = st.top(); st.pop();

            PostOrder.push_back(temp->val);

            if(temp->left) st.push(temp->left);
            if(temp->right) st.push(temp->right);
        }
        
        reverse(PostOrder.begin(),PostOrder.end());
        return PostOrder;
    }
};