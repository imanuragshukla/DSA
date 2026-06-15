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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head)return head;
        bool flag = false;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flag = true;
                break;
            }
        }
        ListNode* temp1 = head;

        if(flag == false)return NULL;
        while(true){
            if(temp1==slow)return temp1;
            slow= slow->next;
            temp1=temp1->next;
        }

        return temp1;
    }
};