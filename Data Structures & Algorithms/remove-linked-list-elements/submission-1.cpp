class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Box to store all values we want to KEEP
        vector<int> arr;

        // cur is our "finger" pointing at the current node
        ListNode* cur = head;

        // Walk through the whole list
        while (cur) {
            // If this node is NOT the value to remove, keep it
            if (cur->val != val) {
                arr.push_back(cur->val);
            }
            // Move finger to the next node
            cur = cur->next;
        }

        // If the box is empty, every node was removed -> return empty list
        if (arr.empty()) {
            return nullptr;
        }

        // Make the first node of the new list (this will be the head)
        ListNode* res = new ListNode(arr[0]);

        // Put the finger on the head of the new list
        cur = res;

        // Build the rest of the new list from the box
        for (int i = 1; i < arr.size(); i++) {
            // Create a new node with the next kept value
            ListNode* node = new ListNode(arr[i]);

            // Attach it to the end of the new list
            cur->next = node;

            // Move finger to the newly added last node
            cur = cur->next;
        }

        // Return the head of the new list
        return res;
    }
};