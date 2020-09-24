/*
input:
    1 2 3
    4 5
    0 0 0 0 0
*/
#include <stdio.h>
int main()
{
    int t,ans=0;
    while( scanf("%d",&t) != EOF) {
        ans+=t;
        if( getchar() == '\n') {
            printf("%d\n",ans);
            ans=0;
        }
    }
    return 0;
}