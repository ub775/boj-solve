#include <cstdio>

using namespace std;

int arr[302];
int dp[302];

int Max(int a,int b) {
    if(a > b) return a;
    return b;
}

int main()
{
    int s;
    scanf("%d",&s);
    for(int i = 1 ; i <= s ; i++) {
        scanf("%d",&arr[i]);
    }
    arr[0] = 0;
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = Max(arr[2] + arr[3], arr[1] + arr[3]);

    for(int i = 4 ; i <= s ; i++) {
        dp[i] = Max(arr[i] + dp[i-2],arr[i] + arr[i-1] + dp[i-3]);
    }
    printf("%d",dp[s]);
    return 0;
}
