#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;
void fun()
{
    return;
}
ListNode *create_list()
{
    static ListNode a,b,c,d,e;
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

    return &a;
}
int main()
{
    ListNode *head = create_list();
    while (head != NULL)
    {
        printf("%d\n",head->val);
        head = head->next;
    }
    
    system("pause");
    return 0;

}