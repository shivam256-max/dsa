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
        int c=1;
        ListNode *p=head;
        if(p==nullptr){
            return head;
        }
        while(p->next!=nullptr){
            c++;
            p=p->next;

        }
        k=k%c;
       
        if(k==0){
            return head;
        }
        p->next=head;
        p=head;
        c=c-k;
        int i=1;
        while(i<c){
            p=p->next;
            i++;
        }
        head=p->next;
        p->next =nullptr;
        
       return head;
        
    }
};