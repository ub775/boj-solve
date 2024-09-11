#include <stdio.h>

int main() {

	int n, t, m;
	scanf("%d", &n);
	t = n / 5;
	m = n % 5;
	if (m == 0) printf("%d", t);
	else if (m == 1 && t >= 1) printf("%d", t - 1 + 2);
	else if (m == 2 && t >= 2) printf("%d", t - 2 + 4);
	else if (m == 3) printf("%d", t + 1);
	else if (m == 4 && t >= 1) printf("%d", t - 1 + 3);
	else printf("-1");

	return 0;
}