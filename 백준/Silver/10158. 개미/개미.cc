#include <stdio.h>

int main() {

	int w, h, x, y, t, xt, yt, sw, i;
	scanf("%d %d", &w, &h);
	scanf("%d %d", &x,&y);
	scanf("%d", &t);

	xt = yt = t;
	xt = xt % (2 * w);
	yt = yt % (2 * h);

	sw = 1;
	if (x == 0) sw = -1;
	for (i = 1; i <= xt; i++) {
		if (x == w || x == 0) sw = sw * -1;
		x = x + sw;
	}

	sw = 1;
	if (y == 0) sw = -1;
	for (i = 1; i <= yt; i++) {
		if (y == h || y == 0) sw = sw * -1;
		y = y + sw;
	}

	printf("%d %d", x, y);

	return 0;
}