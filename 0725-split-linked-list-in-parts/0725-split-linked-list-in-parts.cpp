class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        int idx = 0;
        int size = 0;

        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }
        temp = head;

        while(temp){
            ans[idx] = temp;
            int count = 1;
            int n = size/k;;
            if(size % k != 0) n += 1;
            while(temp && count < n){
                count ++;
                temp = temp->next;
            }
            ListNode* prev = temp;
            if(temp) temp = temp->next;
            if(prev) prev->next = NULL;

            size -= n;
            k--;
            idx++;

        }
        return ans;
        

    }
};