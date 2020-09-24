#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr1 = "-12345.12";
    char *ptr2 = "+1234w34";
    char *ptr3 = "   456er12";
    char *ptr4 = "789 123";
    int a,b,c,d;

    a = atoi(ptr1);
    b = atoi(ptr2);
    c = atoi(ptr3);
    d = atoi(ptr4);

    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    system("pause");
    return 0;
}