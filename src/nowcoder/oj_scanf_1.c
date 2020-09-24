/*
input:
    1 5
    10 20 
*/
#include <stdio.h>
int main()
{
    int a,b;
    while( scanf("%d %d",&a,&b) != EOF) {
       printf("%d\n",a+b);
    }
    
    return 0;
}
