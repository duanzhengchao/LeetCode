/*
������: strlen
����: strlen ����������ַ����ĳ��ȣ�����÷����Ǵ��ַ������׵�ַ��ʼ��������һ�� '\0' ֹͣ����,�����ֻ����û�и�������ֵ���������ǲ����ģ�������ַ����׵�ַһֱ����ȥ��ֱ������ '\0' �Ż�ֹͣ��
ԭ��: size_t strlen ( const char *s);
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    char *he = "Hello,world";
    i = strlen(he);
    printf("�ַ�������Ϊ%d\n", i);
    system("pause");
    return 0;
}