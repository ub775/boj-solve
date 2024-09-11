#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char A[5][20];

int main() {
	int i, j;

	for (i = 0; i < 5; i++) {
		scanf("%s", A[i]);
	}

	for (i = 0; i < 15; i++) {
		for (j = 0; j < 5; j++) {
			if(A[j][i] != NULL) printf("%c", A[j][i]);
		}
	}

	return 0;
}