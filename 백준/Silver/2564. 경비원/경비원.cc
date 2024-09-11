#include <stdio.h>
#include <stdlib.h>

int a, b, n, i, t, count = 0;
int d[101] = { 0 }, p[101] = { 0 };
int dd, dp;             

int c(int j, int k) {
	int l;
	if (dd == j) return abs(dp - k);
	else if (dd == 1) {
		if (j == 2) {
			l = dp + b + k;
			if (l - (t - l) >= 0) return t - l;
			else return l;
		}
		else if (j == 3) return dp + k;
		else if (j == 4) return (a - dp) + k;
	}
	else if (dd == 2) {
		if (j == 1) {
			l = dp + b + k;
			if (l - (t - l) >= 0) return t - l;
			else return l;
		}
		else if (j == 3) return dp + (b - k);
		else if (j == 4) return (a - dp) + (b - k);
	}
	else if (dd == 3) {
		if (j == 1) return dp + k;
		else if (j == 2) return (b - dp) + k;
		else if (j == 4) {
			l = dp + a + k;
			if (l - (t - l) >= 0) return t - l;
			else return l;
		}
	}
	else if (dd == 4) {
		if (j == 1) return dp + (a - k);
		else if (j == 2) return (b - dp) + (a - k);
		else if (j == 3) {
			l = dp + a + k;
			if (l - (t - l) >= 0) return t - l;
			else return l;
		}
	}
}

int main() {

	scanf("%d %d", &a, &b);
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &d[i], &p[i]);
	}
	scanf("%d %d", &dd, &dp);
	t = 2 * (a + b);
	for (i = 1; i <= n; i++) {
		count += c(d[i], p[i]);
	}

	printf("%d", count);

	return 0;
}