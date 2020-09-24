#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main( void )
{
    char string[10];
    char *str1 = "abcdefghi" ;
    strcpy (string, str1);

    printf ( "%s\n" , string);
    system("pause");
    return 0;
}