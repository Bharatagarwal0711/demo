class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp = head;
        ListNode* start = head->next;

        while(start){
            int sum = 0;

            while(start && start->val != 0){
                sum += start->val;
                start = start->next;
            }
            if(start){
                if(start->next == NULL) temp->next = NULL;
                start = start->next;
            }
            temp->val = sum;
            temp = temp->next;
        }

        return head;

    }
};