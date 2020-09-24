/*
input:
    4 1 2 3 4
    5 1 2 3 4 5
    0
*/
#include <stdio.h>
int main()
{
    int n,t,i,ans;
    while( scanf("%d",&n) != EOF) {
        if (n==0) {
            return 0;
        }
        ans=0;
        for (i=0;i<n;i++) {
            scanf("%d",&t);
            ans+=t;
        }
        printf("%d\n",ans);
    }
    return 0;
}