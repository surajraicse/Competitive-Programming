/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *ans=A, *p=A,*q=NULL;
    ListNode *t=(ListNode *)malloc(sizeof(ListNode *));
    t->val=INT_MIN;
    t->next=A;
    while(p!=NULL && p->next!=NULL)
    {
        q=t;
        while(q->next!=p->next && q->next->val < p->next->val)
        {
            q=q->next;
        }
        if(q->next!=p->next)
        {
            ListNode *temp=p->next;
            p->next=p->next->next;
            temp->next=q->next;
            q->next=temp;
        }
        else
         p=p->next;
    }

    return t->next;
}
