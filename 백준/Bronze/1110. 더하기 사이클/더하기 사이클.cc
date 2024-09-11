#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, m, a, b, cnt = 0;

	scanf("%d", &n);
	m = n;
	while (1) {
		a = m / 10;
		b = m % 10;
		m = 10 * b + (a + b) % 10;
		cnt++;
		if (n == m)
			break;
	}

	printf("%d", cnt);

	return 0;
}