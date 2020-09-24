/*
input:
    a,c,bb
    f,dddd
    nowcoder
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a, const void *b)
{
    return *(char *)a-*(char *)b;
}
int main()
{
    int i=0,t,k=0;
    char in[10];
    while(gets(in)!=NULL)//输入原字符串
    {
        char str[10][10];
        char *tmp=strtok(in,",");
        while(tmp!= NULL){
            strcpy(str[k],tmp);
            tmp=strtok(NULL,",");
            k++;
        }

        qsort(str,k,sizeof(str[0]),cmp);
        for (t=0;t<k-1;t++) {
            printf("%s,",str[t]);
        }
        printf("%s\n",str[t]);
        k=0;
        
    }
    return 0;
}