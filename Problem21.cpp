/** Problem 21 
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
// Create a dummy node to simplify edge cases
        ListNode dummy;
        ListNode* tail = &dummy; // Pointer to the last node in the merged list
        // While both lists have nodes to process
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1; // Append list1's node
                list1 = list1->next; // Move list1's pointer forward
            } else {
                tail->next = list2; // Append list2's node
                list2 = list2->next; // Move list2's pointer forward
            }
            tail = tail->next; // Move the tail pointer forward
        }
        // If there are remaining nodes in either list, append them
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }
        // The merged list is next to the dummy node
        return dummy.next;
    }
};