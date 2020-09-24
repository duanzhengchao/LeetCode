/*
函数名:stricmp
功 能: 以大小写不敏感方式比较两个串
用 法: int stricmp( char *str1, char *str2);
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *buf1 = "BBB", *buf2 = "bbb";
    int ptr;
    ptr = stricmp(buf2, buf1);
    if (ptr > 0)
        printf("buffer 2 is greater than buffer 1\n");
    if (ptr < 0)
        printf("buffer 2 is less than buffer 1\n");
    if (ptr == 0)
        printf("buffer 2 equals buffer 1\n");
    system("pause");
    return 0;
}