
/* 剑指 Offer 09. 用两个栈实现队列 */
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *s1;
    int *s2;
    int t1;
    int t2;
    int len;
} CQueue;


CQueue* cQueueCreate() {
    CQueue *queue = malloc(sizeof(CQueue));
    queue->s1 = malloc(sizeof(int)*1000);
    queue->s2 = malloc(sizeof(int)*1000);
    queue->t1 = 0;
    queue->t2 = 0;
    queue->len = 0;
    return queue;
}

void cQueueAppendTail(CQueue* obj, int value) {
    obj->s1[obj->t1++] = value;
    obj->len++;

}

int cQueueDeleteHead(CQueue* obj) {
    obj->len--;
    if(obj->t2 == 0) {
        if(obj->t1 == 0)
            return -1;
        while (obj->t1 != 0) {
            obj->s2[obj->t2++] = obj->s1[--obj->t1];
        }
    }
    return obj->s2[--obj->t2];
}

void cQueueFree(CQueue* obj) {
    free(obj->s1);
    free(obj->s2);
    free(obj);
}
int main()
{
    CQueue *queue = cQueueCreate();
    cQueueAppendTail(queue,3);
    printf("%d\n",cQueueDeleteHead(queue));
    printf("%d\n",cQueueDeleteHead(queue));
    printf("%d\n",cQueueDeleteHead(queue));
    cQueueFree(queue);
    system("pause");
    return 0;
}