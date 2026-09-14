class Solution {
public:
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {

        // If any list is empty, return the other list
        if (List1 == NULL || List2 == NULL) {
            return List1 == NULL ? List2 : List1;
        }

        // Compare both nodes
        if (List1->val <= List2->val) {

            // List1 node comes first
            List1->next = mergeTwoLists(List1->next, List2);

            return List1;
        }
        else {

            // List2 node comes first
            List2->next = mergeTwoLists(List1, List2->next);

            return List2;
        }
    }
};