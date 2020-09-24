/*
input:
    2
    4 1 2 3 4
    5 1 2 3 4 5 
*/
#include <stdio.h>
int main()
{
    int n,t,i,ans,line;
    scanf("%d",&line);
    while(line) {
        line--;
        scanf("%d",&n);
        ans=0;
        for (i=0;i<n;i++) {
            scanf("%d",&t);
            ans+=t;
        }
        printf("%d\n",ans);
    }
    return 0;
}