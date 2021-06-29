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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode *cur = head, *prev = NULL, *next = NULL;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head)
        return head;
    ListNode* tem=head;
    vector<int> v;
    while(tem)
    {
           v.push_back(tem->val);
           tem=tem->next;
    }
    int l=left-1,r=right;
    reverse(v.begin()+l,v.begin()+r);
    int n=v.size();
    tem=head;
    while(tem)
    {
        for(int i=0;i<n;i++)
        {
            tem->val=v[i];
            tem=tem->next;
        }
    }
    return head;
    }
};

