#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ten = 17;
    int two[32];
    int i=0,j;
    while (ten>0)
    {
        two[i] = ten % 2;
        ten = ten / 2;
        i++;
    }
    for (j=i-1; j>=0; j--)
        printf("%d",two[j]);
    system("pause");
    return 0;
}
