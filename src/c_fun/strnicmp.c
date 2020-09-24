/*
函数名: strnicmp
功 能: 将一个串中的一部分与另一个串比较, 不管大小写
用 法: int strnicmp( char *str1, char *str2, unsigned maxlen);
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *buf1 = "BBB", *buf2 = "bbb";
    int ptr;
    ptr = strnicmp(buf2, buf1,strlen(buf1));
    if (ptr > 0)
        printf("buffer 2 is greater than buffer 1\n");
    if (ptr < 0)
        printf("buffer 2 is less than buffer 1\n");
    if (ptr == 0)
        printf("buffer 2 equals buffer 1\n");
    system("pause");
    return 0;
}