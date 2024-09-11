#include <stdio.h>

char arr[50][50] = { 0 };
int ck[50][50] = { 0 };
int Q[2500][3] = { 0 };
int k[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
int a, b, max = 0;

int can_go(int i, int j) {
	if (a < i || i < 0 || b < j || j < 0) return 0;
	return 1;
}

void clear() {
	int i, j;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			ck[i][j] = 0;
		}
	}
}

void BFS(int m, int n) {

	int front = 0, rear = 1, i, y, x, temp2, temp3;
	char temp1;

	clear();
	Q[rear][0] = m;
	Q[rear][1] = n;
	Q[rear][2] = 1;
	ck[m][n] = 1;

	while (1) {
		if (front == rear) break;
		front++;
		y = Q[front][0];
		x = Q[front][1];
		for (i = 0; i < 4; i++) {
			temp1 = arr[y + k[i][0]][x + k[i][1]];
			temp2 = can_go(y + k[i][0], x + k[i][1]);
			temp3 = ck[y + k[i][0]][x + k[i][1]];
			if (temp1 == 'L' && temp2 && !temp3) {
				rear++;
				Q[rear][0] = y + k[i][0];
				Q[rear][1] = x + k[i][1];
				Q[rear][2] = Q[front][2] + 1;
				ck[y + k[i][0]][x + k[i][1]] = Q[front][2] + 1;
			}
		}
	}
	if (Q[rear][2] > max) max = Q[rear][2];
}

int main() {

	int i, j, f, r;

	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		scanf("%s", &arr[i]);
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			if(arr[i][j] == 'L') BFS(i, j);
		}
	}

	printf("%d", max-1);

	return 0;

}