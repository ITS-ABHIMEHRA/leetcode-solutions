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
    ListNode* sumtwo(ListNode* l1,ListNode* l2,int carry=0){
        if(l1==NULL && l2==NULL){
            if(carry==0)return NULL;
            return new ListNode(1);
        }
        ListNode * temp =new ListNode();
        int num=0;
        if(l1==NULL) num=l2->val+carry; 
        else if(l2==NULL) num=l1->val+carry;
        else num=l1->val+l2->val+carry;
        if(num>=10){
            num-=10;carry=1;
        }
        else carry=0;
        temp->val=num;
        if(l1==NULL)temp->next=sumtwo(l1,l2->next,carry);
        else if(l2==NULL)temp->next=sumtwo(l1->next,l2,carry);
        else temp->next=sumtwo(l1->next,l2->next,carry);
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return sumtwo(l1,l2,0);
    }
};