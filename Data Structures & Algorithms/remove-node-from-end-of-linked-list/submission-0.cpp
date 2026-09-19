class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Step 1: count total nodes
        int total = 0;
        ListNode* curr = head;

        while(curr != NULL) {
            total++;
            curr = curr->next;
        }

        // Position of node to remove from beginning
        int pos = total - n + 1;

        // Special case: removing the first node
        if(pos == 1) {
            return head->next;
        }

        // Step 2: reach the node before the one we want to remove
        curr = head;

        for(int i = 1; i < pos - 1; i++) {
            curr = curr->next;
        }

        // Remove the node
        curr->next = curr->next->next;

        return head;
    }
};