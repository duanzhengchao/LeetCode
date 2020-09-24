#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(char *a, char *b)
{
    int s1=0,s2=0;
    int now_len=0;
    int max_len=0;
    char last;
    while(a[s1]!='\0' && b[s2] != '\0')
    {
        if(b[s2] == '*') {
            if(a[s1] == last)
            {
                now_len++;
            }
            else
            {
                s2++;
                if(b[s2] == '\0'){
                    if(now_len>max_len)
                        max_len = now_len;
                    now_len = 0;
                    s2=0;
                }
                continue;
            }
        } else if (b[s2] == a [s1]){
            now_len++;
            last = b[s2];
            s2++;
            if(b[s2] == '\0'){
                if(now_len>max_len)
                    max_len = now_len;
                now_len = 0;
                s2=0;
            }
        } else {
            if(now_len>max_len)
                max_len = now_len;
            now_len = 0;
            s2=0;
        }
        s1++;
        
    }
    if(now_len>max_len)
        max_len = now_len;
    return max_len;

}

int main()
{
    int i=0,t;
    char str1[1000];
    char str2[1000];

    scanf("%s",&str1);
    scanf("%s",&str2);

    for(i=0;i<strlen(str2);i++) {
        if (str2[i]=='*'){
            if(i-1<0 || i+1>strlen(str2))
                continue;
            if(str2[i-1]==str2[i+1]){
                int k = 2;
                while (str2[i-1] == str2[i+k] && i+k<strlen(str2))
                {
                    str2[i+k]='*';
                    k++;
                }
                
                str2[i+1]='*';
            }
        }
    }

    int ans = cmp(str1, str2);
    printf("%d",ans);


    system("pause");
    return 0;
}

/*

abbbbcdefgabbbbbbbcd
ab*bbc*d
*/