/* 剑指 Offer 18. 删除链表的节点剑指 Offer 18. 删除链表的节点 
给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
返回删除后的链表的头节点。

输入: head = [4,5,1,9], val = 5
输出: [4,1,9]
解释: 给定你链表中值为 5 的第二个节点，那么在调用了你的函数之后，该链表应变为 4 -> 1 -> 9. */
#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;
struct ListNode* deleteNode(struct ListNode* head, int val){
    if (head == NULL) {
        return NULL;
    }
    if (head->val == val) {
        return head->next;
    }
    struct ListNode* cur = head;
    while(cur->next != NULL) {
        if (cur->next->val == val) {
            if (cur->next->next != NULL) {
                cur->next = cur->next->next;
                return head;
            } else {
                cur->next = NULL;
                return head;
            }
        }
        cur = cur->next;
    }
    return head;
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
    head = deleteNode(head,2);
    while (head != NULL)
    {
        printf("%d\n",head->val);
        head = head->next;
    }
    
    system("pause");
    return 0;

}