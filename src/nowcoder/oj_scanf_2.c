/*
input:
    2
    1 5
    10 20
*/
#include <stdio.h>
int cmp(char *a, char *b)
{
    return *a-*b;
}
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t) {
       scanf("%d %d",&a,&b);
       printf("%d\n",a+b);
       t--;
    }
    
    return 0;
}