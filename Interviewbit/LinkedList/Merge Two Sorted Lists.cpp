/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    ListNode* head;
    
    if(B->val <A->val)
    {
        head=B;
        B=B->next;
    }
    else
    {
        head=A;
        A=A->next;
    }
    ListNode* temp=head;
    while(A&&B)
    {
        if(A->val<B->val)
        {
            temp->next=A;
            A=A->next;
           
        }
        else 
        {
            temp->next=B;
            B=B->next;
           
        }
        temp=temp->next;     
    }
    
         if(A)
            temp->next=A;
         
         if(B)
            temp->next=B;
                    
    return head;
}
