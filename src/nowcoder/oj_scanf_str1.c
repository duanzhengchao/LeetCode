/*
input:
    5
    c d a bb e
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(char *)a-*(char *)b;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    char str[t][10];
    for (i=0;i<t;i++) {
        scanf("%s",&str[i]);
    }
    qsort(str,t,sizeof(str[0]),cmp);
    for (i=0;i<t;i++) {
        printf("%s ",str[i]);
    }
    
    return 0;
}