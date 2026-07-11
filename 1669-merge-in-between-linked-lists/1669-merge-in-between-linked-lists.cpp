class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        int idx = 0;

        ListNode* before = NULL;
        ListNode* nxt = NULL;

        while(temp){
            if(idx == a-1) before = temp;
            if(idx == b+1) nxt = temp;
            idx++;
            temp = temp->next;
        }
        
        temp = list2;
        while(temp->next) temp = temp->next;
        temp->next = nxt;

        if(before == NULL) return list2;
        before->next = list2;
        return list1;

    }
};