class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> ans(2,-1);
        vector<int> points;
        int idx = 1;
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* nxt = head->next;

        while(nxt && nxt->next){
            nxt = nxt->next;

            bool flag = ((curr->val > prev->val) && (curr->val > nxt->val)) ||
                        ((curr->val < prev->val) && (curr->val < nxt->val));

            if(flag) points.push_back(idx);

            idx++;
            prev = curr;
            curr = nxt;

        }
        if(points.size() < 2) return ans;

        ans[1] = points[points.size()-1] - points[0];
        ans[0] = INT_MAX;
        for(int i=1;i<points.size();i++){
            ans[0] = min(ans[0],points[i]-points[i-1]);
        }

        return ans;


    }
};