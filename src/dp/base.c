
#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int dp[10000];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])%1000000007;
    }
    return dp[n];
}
int main()
{
    printf("%d",fib(3));
    system("pause");
    return 0;
}
