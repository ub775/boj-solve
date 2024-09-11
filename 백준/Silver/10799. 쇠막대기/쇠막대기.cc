#include <stdio.h>

char A[100000];

int main() {

	int i, cnt = 0, res = 0;

	scanf("%s", &A);
	for (i = 0; A[i] != NULL; i++) {
		if (A[i] == '(') cnt++;
		if (A[i - 1] == '(' && A[i] == ')') {
			cnt--;
			res += cnt;
		}
		else if (A[i - 1] != '(' && A[i] == ')') {
			cnt--;
			res++;
		}
	}
	printf("%d", res);

	return 0;
}