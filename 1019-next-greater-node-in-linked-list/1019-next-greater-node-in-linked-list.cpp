class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> values;

        ListNode* temp = head;
        while(temp){
            values.push_back(temp->val);
            temp = temp->next;
        }
        int n = values.size();
        vector<int> ans(n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){

            while(!st.empty() && st.top() <= values[i]) st.pop();

            if(st.empty()) ans[i] = 0;
            else ans[i] = st.top();

            st.push(values[i]);
        }

        return ans;

    }
};