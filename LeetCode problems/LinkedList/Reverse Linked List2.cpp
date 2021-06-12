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
    ListNode* reverseBetween(ListNode* head, int start, int end) {
        
        if(!head || start==end)
            return head;
        
        ListNode dummy(0);
        dummy.next=head;
        ListNode* beforesublist;
        beforesublist=&dummy;
        int pos=1;
        
        while(pos<start)
        {
         beforesublist=beforesublist->next;
            pos++;
        }
        
        ListNode* workingnode=beforesublist->next;
        while(start<end)
        {
            ListNode* extracted=workingnode->next;
            workingnode->next=extracted->next;
            extracted->next=beforesublist->next;
            beforesublist->next=extracted;
            start++;
        }
        return dummy.next;
        }
};
