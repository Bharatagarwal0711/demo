class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return head;

        Node* temp = head;
        while(temp){
            if(temp->child){
                Node* nxt = temp->next;
                temp->next = flatten(temp->child);
                temp->next->prev = temp;

                temp->child = NULL;

                while(temp->next) temp = temp->next;
                temp->next = nxt;
                if(nxt) nxt->prev = temp;

                temp = nxt;
            }
            if(temp) temp = temp->next;
        }
        return head;
    }
};