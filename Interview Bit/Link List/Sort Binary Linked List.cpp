/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *p,*q;
    p=A;
    q=A;
    while(q->next!=NULL)
    {
        if(q->next->val==0)
        {
            ListNode *t=q->next;
            q->next=q->next->next;
            t->next=p;
            p=t;
        }
        else
            q=q->next;
    }
    return p;
}
