class Solution {
public:
    int factor = 1;
    int getDecimalValue(ListNode* head) {
        if(head == NULL) return 0;
        int ans = getDecimalValue(head->next);

        ans += head->val*factor;
        factor *= 2;

        return ans;
    }
};
