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
        if(head==nullptr || head->next==nullptr)return head;
        ListNode*tem=head;
        int n=1;
        while(tem->next!=nullptr){
            tem=tem->next;
            n++;
        }
        k=k%n;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            temp=head;
            while(temp->next->next!=nullptr){
            temp=temp->next;
            }
            temp->next->next=head;
            head=temp->next;
            temp->next=nullptr;
        }
        return head;
    }
};