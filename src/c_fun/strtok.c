
/*函数名: strtok
功 能: 查找由在第二个串中指定的分界符分隔开的单词
用 法: char * strtok ( char *str1, char *str2);
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char input[16] = "abc,d";
    char *p;

    p = strtok(input, ",");
    if (p)
        printf("%s\n", p);

    p = strtok(NULL, ",");
    if (p)
        printf("%s\n", p);
    system("pause");
    return 0;
}