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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> arr;
        ListNode* cur = head;

        while (cur) {
            if (cur->val != val) {
                arr.push_back(cur->val);
            }
            cur = cur->next;
        }

        if (arr.empty()) {
            return nullptr;
        }

        ListNode* res = new ListNode(arr[0]);
        cur = res;
        for (int i = 1; i < arr.size(); i++) {
            ListNode* node = new ListNode(arr[i]);
            cur->next = node;
            cur = cur->next;
        }

        return res;
    }
};