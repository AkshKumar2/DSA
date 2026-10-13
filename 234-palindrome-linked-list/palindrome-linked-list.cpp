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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        if(head==nullptr)return false;
        if(head->next==nullptr)return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            s.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        bool flag=true;
        ListNode* temp;
        if(fast->next==nullptr)temp=slow->next;
        else if(fast->next->next==nullptr){temp=slow->next;s.push(slow->val);}
        while(temp!=nullptr && !s.empty()){
            if(temp->val==s.top())s.pop();
            else flag= false;
            temp=temp->next;
        }return flag;
        
    }
};