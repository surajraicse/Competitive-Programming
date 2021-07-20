/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *pro(ListNode *p1,ListNode *p2)
{
    ListNode *x,*ans=(ListNode *)malloc(sizeof(ListNode *));
    x=ans;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->val<p2->val)
        {
            ans->next=p1;
            p1=p1->next;
            ans=ans->next;
        }
        else
        {
            ans->next=p2;
            p2=p2->next;
            ans=ans->next;
        }
    }
    if(p1!=NULL)
    {
        ans->next=p1;
    }
    else
    {
        ans->next=p2;
    }
    return x->next;
}
ListNode *merge(ListNode *A)
{
    ListNode *p=A,*q=A->next;
    if(A->next==NULL)
        return A;
    while(p!=NULL && q!=NULL && q->next!=NULL)
    {
        
        p=p->next;
        q=q->next->next;
    }
    q=p->next;
    p->next=NULL;
    ListNode *p1=merge(A);
    ListNode *p2=merge(q);
    return pro(p1,p2);
}
ListNode* Solution::sortList(ListNode* A) {
    if(A->next==NULL)
        return A;

    return merge(A);
}
