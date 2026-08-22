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
        if(!head || !head->next) return head;
         ListNode* temp = head;
        int size = 0;
        while(temp){
            size++;
            temp=temp->next;
        }
        k%=size;
        if(k==0) return head;
        int target = size-k+1;

        temp =head;
        ListNode* prev=nullptr;
        int counter =1;
        while(counter<target){
            counter++;
            prev= temp;
            temp=temp->next;
        }
        prev->next=nullptr;
        ListNode* ans = temp;
        while(temp->next){
            temp=temp->next;
        }

        temp->next=head;
        return ans;
    }
};