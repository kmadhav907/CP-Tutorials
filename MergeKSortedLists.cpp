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
    ListNode* merge(ListNode* l1 , ListNode* l2){
        ListNode* dummy = new ListNode(0 , NULL);
        ListNode* tail = dummy;
        while (l1 != NULL  && l2 != NULL){
            if(l1->val < l2->val){
                tail->next = l1;
                l1 = l1->next;
                
            }
            else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
            
        }
        if(l1){
            tail->next = l1;
        }
        if(l2){
            tail->next = l2;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      
        if(lists.size() == 0)
            return NULL;
        
        while(lists.size() > 1){
            vector<ListNode*> mergeList;
            for(int i = 0; i < lists.size() ; i+=2){
                ListNode *l1 = lists[i];
                ListNode *l2 = NULL;
                if(i + 1 < lists.size()){
                    l2 = lists[i+1];
                }
            mergeList.push_back(merge(l1 , l2));
            
            }
            lists = mergeList;
        }
        return lists[0];
    }
};
