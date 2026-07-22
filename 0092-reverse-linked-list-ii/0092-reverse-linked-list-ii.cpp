/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* curr = head, *prev = NULL, *nxt = head->next;

        while(nxt){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }
        curr->next = prev;
        return curr;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(left == right) return head;

        ListNode* a = NULL, *b = NULL, *c = NULL, *d = NULL;

        int count = 0;

        ListNode* temp = head;

        while(temp){
            count++;
            if(count == left-1) a = temp;
            if(left == count) b=temp;
            if(right == count) c = temp;
            if(count == right+1) d = temp;

            temp = temp->next;
        }
        
        c->next = NULL;
        c = reverseList(b);
        if(a) a->next = c;
        else head = c;
        b->next = d;

        return head;

    }
};