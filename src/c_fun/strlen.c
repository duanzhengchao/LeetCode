/*
函数名: strlen
功能: strlen 函数求的是字符串的长度，它求得方法是从字符串的首地址开始到遇到第一个 '\0' 停止计数,如果你只定义没有给它赋初值，这个结果是不定的，它会从字符串首地址一直记下去，直到遇到 '\0' 才会停止。
原型: size_t strlen ( const char *s);
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    char *he = "Hello,world";
    i = strlen(he);
    printf("字符串长度为%d\n", i);
    system("pause");
    return 0;
}