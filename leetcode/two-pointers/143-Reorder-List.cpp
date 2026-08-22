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
    ListNode* revLL(ListNode* slow){
        ListNode* prev= nullptr;
        ListNode* curr = slow;
        while(curr){
            ListNode* temp= curr;

            curr=curr->next;
            temp->next=prev;
            prev=temp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next){
            return;
        }
       ListNode* fast = head;
       ListNode* slow = head;
       ListNode* prev=nullptr;
       while(fast && fast->next){
         prev=slow;
         slow = slow->next;
         fast=fast->next->next;
       }
        prev->next=nullptr;
       ListNode* node = revLL(slow);
        ListNode* curr = head;
        int counter = 0;
       while(curr && node){
         if(counter==0){
            ListNode* temp= curr;
            curr=curr->next;
            temp->next=node;
            counter=1;
         }
         else{
            ListNode* temp= node;
            node=node->next;
            temp->next=curr;
            counter=0;
         }
       }
    }
};