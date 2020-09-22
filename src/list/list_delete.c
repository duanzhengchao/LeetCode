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