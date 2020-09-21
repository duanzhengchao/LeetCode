#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;
struct ListNode *ReverseList(struct ListNode *pHead)
{
    // write code here
    struct ListNode *pre = NULL;
    struct ListNode *cur = pHead;
    struct ListNode *temp = NULL;
    while (cur != NULL)
    {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur= temp;
    

    }
    return pre;
}
int main()
{
    ListNode a,b,c,d,e;
    ListNode *head = NULL;
    int val = 0;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    head = &a;
    while (head != NULL)
    {
        head->val = val;
        val++;
        head = head->next;
    }
    head = ReverseList(&a);

    
    while (head != NULL)
    {
        printf("%d\n",head->val);
        head = head->next;
    }
    system("pause");
    return 0;

}