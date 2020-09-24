/*
input:
    a c bb
    f dddd
    nowcoder
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return *(char *)a-*(char *)b;
}
int main()
{
    int i=0,t;
    char str[10][10];
    while (scanf("%s",&str[i]) != EOF) {
        i++;
        if (getchar() == '\n'){
            qsort(str,i,sizeof(str[0]),cmp);
            for (t=0;t<i;t++) {
                printf("%s ",str[t]);
            }
            printf("\n");
            i=0;
        }
    }
    return 0;
}