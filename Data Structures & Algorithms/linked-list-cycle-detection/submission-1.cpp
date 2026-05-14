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
    bool hasCycle(ListNode* head) {
        unordered_set<int> visited;

        ListNode* curr = head;
        while (curr)
        {
            if (!curr->next)
            {
                return false;
            }

            if (visited.contains(curr->val))
            {
                return true;
            }

            visited.insert(curr->val);
            curr = curr->next;
        }

        return false;
    }
};
