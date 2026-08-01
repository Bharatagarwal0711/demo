class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL || left==right) return head;

        ListNode* a = NULL, *b = NULL, *c = NULL, *d = NULL;

        ListNode* temp = head;
        int idx = 1;

        while(temp){
            if(left-1 == idx) a = temp;
            else if(left == idx) b = temp;
            else if(right == idx) c = temp;
            else if(right+1 == idx) d = temp;

            idx++;
            temp = temp->next;
        }

        if(c) c->next = NULL;

        temp = reverseList(b);

        if(a) a->next = temp;
        b->next = d;

        if(a) return head;
        return temp;
    }


    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = head->next;

        while(nxt){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        return curr;
    }
};