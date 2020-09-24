/* 
cmp函数的返回值，<=0(不进行置换)，>0(进行置换)
base：待排序数组，排序之后的结果仍放在这个数组中
num： 数组中待排序元素数量
width： 各元素的占用空间大小（单位为字节）
compare： 指向函数的指针，用于确定排序的顺序（需要用户自定义一个子函数） 
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *_a,const void *_b)
{
    int a = *(int *)_a;
    int b = *(int *)_b;
    return (a <= b) ?  0 : 1;
}
int main()
{
    int a[] = {1,3,6,87,34,8,43,89,67,6,6,6};
    size_t len = sizeof(a)/sizeof(a[0]);
    int i;

    qsort(a,len,sizeof(a[0]),cmp);
    for (i=0; i<len; i++) {
        printf("%d\n",a[i]);
    }
    system("pause");
    return 0;
}