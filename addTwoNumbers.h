/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* l5 = l3;
        int t = 0;
        while((l1 != NULL) || (l2 != NULL) || t){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = x + y + t;
            //l5->val = sum % 10;
            t = sum/10;
            l5->next = new ListNode(sum%10);
            //ListNode temp(0);
            //l5->next = &temp;
            l5 = l5->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return l3->next;
    }
};