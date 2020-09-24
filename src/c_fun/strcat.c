/*
函数名: strcat
功 能: 字符串拼接函数
用 法: char * strcat ( char *destin, char *source);
程序例:
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main( void )
{
    char destination[25];
    char *blank = " " , *c = "C++" , *Borland = "Borland" ;
    strcpy (destination, Borland);
    strcat (destination, blank);
    strcat (destination, c);
    printf ( "%s\n" , destination);
    system("pause");
    return 0;
}