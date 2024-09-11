#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int A[1100] = { 0 };

int main() {
	int n, p, k, cnt = 1;

	scanf("%d %d", &n, &p);

	A[n] = 1;
	k = n;

	while (1) {
		k = k * n % p;
		cnt++;
		if (A[k]) {
			printf("%d", cnt - A[k]);
			return 0;
		}
		A[k] = cnt;
	}

	return 0;
}