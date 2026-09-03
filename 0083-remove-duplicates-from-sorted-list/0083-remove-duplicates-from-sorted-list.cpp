class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Check if the list is empty to prevent errors
        if (head == nullptr) {
            return head;
        }

        // Create a pointer to traverse the list starting from head
        ListNode* curr = head;

        // Loop until we reach the last node or the end of the list
        while (curr != nullptr && curr->next != nullptr) {
            // Check if the current value matches the next value
            if (curr->val == curr->next->val) {
                // Skip the duplicate by pointing to the node after it
                curr->next = curr->next->next;
            } else {
                // Move the pointer forward if no duplicate is found
                curr = curr->next;
            }
        }

        // Return the modified list starting at head
        return head;
    }
};