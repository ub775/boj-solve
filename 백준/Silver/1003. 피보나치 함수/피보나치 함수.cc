#include <cstdio>

using namespace std;

int arr[2][41] = {{1,0},{0,1},};

void fibo(int n) {
    if(arr[0][n] == 0 && arr[1][n] == 0) {
        fibo(n-1);
        fibo(n-2);
        arr[0][n] = arr[0][n-1] + arr[0][n-2];
        arr[1][n] = arr[1][n-1] + arr[1][n-2];
    }
    return;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        fibo(n);
        printf("%d %d\n",arr[0][n],arr[1][n]);
    }
    return 0;
}
