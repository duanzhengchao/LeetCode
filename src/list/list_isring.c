/* 判断链表是否成环 */
#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;
int hasCycle(struct ListNode* head ) {
    // write code here
    struct ListNode* fast = head;
    struct ListNode* low = head;
    while(fast != NULL && fast->next != NULL) {
        low = low->next;
        fast = fast->next->next;
        if (low == fast) {
            return 1;
        }
    }
    return 0;
    
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
    e.next = &a;

    head = &a;

    return &a;
}
int main()
{
    ListNode *head = create_list();
    int ans = hasCycle(head);

    printf("%d\n",ans);

    
    system("pause");
    return 0;

}