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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
       int cnt =0;
       ListNode* temp1 = head;
       ListNode* temp2 = NULL;
       while(temp1){
        cnt++;
        temp2 = temp1;
        temp1= temp1->next;
       }
       k= k%cnt;
       if(k==0)return head;

       cnt = cnt-k;
       temp2->next = head;
       ListNode* temp3 = head;
       cnt--;
       while(cnt--){
        temp3= temp3->next;
       }
       ListNode* ans = temp3->next;
       temp3->next = NULL;
       return ans;

    }
};