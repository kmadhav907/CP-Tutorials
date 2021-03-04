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
typedef long long ll;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur1 = l1;
        ListNode*cur2 = l2;
        ListNode* newLL = new ListNode();
        ListNode* itr = newLL;
        
        ll temp = 0, carry = 0, a ,b;
    

        while(cur1 != NULL || cur2 != NULL){
            a = (cur1 != NULL) ? cur1->val : 0;
            b = (cur2 != NULL)? cur2->val : 0;
            temp = a + b + carry;
            

            carry = (int)temp/10;
            itr->next = new ListNode(temp%10);
            itr = itr->next; 
            if (cur1)
            cur1 = cur1->next;
            if (cur2)
            cur2 = cur2->next;
            
        }
        if (carry){
            itr->next = new ListNode(carry);
        }
        return newLL->next;
    }
};