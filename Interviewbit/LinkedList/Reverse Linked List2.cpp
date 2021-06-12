/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int start, int end) {

    ListNode dummy(0);
    dummy.next=head;
    
    ListNode* sublist;
    sublist=&dummy;
    int pos=1;
    while(pos<start)
    {
        sublist=sublist->next;
        pos++;
    }
    
    ListNode* workingnode=sublist->next;
    
    while(start<end)
    {
        ListNode* extracted=workingnode->next;
        workingnode->next=extracted->next;
         extracted->next=sublist->next;
         sublist->next=extracted;
         start++;
    }
    
    return dummy.next;
}
