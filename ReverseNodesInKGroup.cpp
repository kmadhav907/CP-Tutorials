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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = 0;
        ListNode* cur = head;
        while(cur){
            cur = cur->next;
            len++;
        }
        ListNode* oldy = NULL;
        ListNode* ans = NULL;
        bool first = false;
        int times = len/k;
        while(times--){
            ListNode* prev = NULL , *nextLL = NULL, *tail = head;
            int cnt = 0;
            while(head && cnt < k){
                nextLL = head->next;
                head->next = prev;
                prev = head;
                head = nextLL;
                cnt++;
            }
            if(!first) {
                ans = prev;
                first = true;
            }
            if(oldy) oldy->next = prev;
            oldy = tail;
            tail->next = nextLL;
        }
    return ans;
    }
};
