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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)return NULL;
        if(!head->next->next){
            head->next = NULL;
            return head;
        }
        ListNode *start = head;
        ListNode *sec = head->next;

        while(sec->next->next){
            start = start->next;
            sec = sec->next->next;
            if(sec->next==NULL)break;
        }

        start->next = start->next->next;
        return head;

    }
};