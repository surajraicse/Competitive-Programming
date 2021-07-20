/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *p=NULL,*q=NULL,*t1=NULL,*t2=NULL;
    while(A!=NULL)
    {
        if(A->val<B)
        {
            if(p==NULL)
            {
                p=A;
                A=A->next;
                p->next=NULL;
                t1=p;
            }
            else
            {
                p->next=A;
                p=p->next;
                A=A->next;
                p->next=NULL;
            }
        }
        else
        {
            if(q==NULL)
            {
                q=A;
                A=A->next;
                q->next=NULL;
                t2=q;
            }
            else
            {
                q->next=A;
                q=q->next;
                A=A->next;
                q->next=NULL;
            }
        }
    }
    if(t1!=NULL)
        p->next=t2;
    else
        t1=t2;
    return t1;
}
