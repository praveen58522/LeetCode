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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> m;
        
        if(lists.empty()){
            return NULL;
        }
        for(auto it = lists.begin(); it!=lists.end(); it++){
            
            ListNode* copy = *it;
            if(copy == NULL){
                continue;
            }
            while(copy != NULL){
                m.push_back(copy->val);
                copy = copy->next;
            }
            
        }
        if(m.size()==0)
            return NULL;
        
        sort(m.begin(), m.end());
        ListNode* ans = new ListNode(*m.begin());
        ListNode* temp = ans;
        auto it = m.begin();
        it++;
        
        for(; it!=m.end(); it++){
            ListNode* temp2 = new ListNode(*it);
             temp->next = temp2;
            temp = temp->next;   
        }
        
        return ans;
        
    }
};