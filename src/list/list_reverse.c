/* 定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL */
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
    head = create_list(head);
    while (head != NULL)
    {
        printf("%d\n",head->val);
        head = head->next;
    }
    
    system("pause");
    return 0;

}