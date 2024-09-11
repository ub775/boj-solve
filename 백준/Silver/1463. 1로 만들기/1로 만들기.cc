#include <cstdio>

using namespace std;

int arr[1000002];

int Min(int a,int b) {
    if(a > b) return b;
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);

    arr[1] = 0;

    for(int i = 2 ; i <= n ; i++) {
        arr[i] = arr[i-1] + 1;
        if(i%3 == 0) {
            arr[i] = Min(arr[i],arr[i/3]+1);
        }
        if(i%2 == 0) {
            arr[i] = Min(arr[i],arr[i/2]+1);
        }
    }
    printf("%d",arr[n]);
    return 0;
}
