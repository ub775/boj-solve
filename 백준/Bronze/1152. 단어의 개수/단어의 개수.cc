#include <stdio.h>
#include <string.h>

int main() {

	char str[1000001];
	int len, cnt = 0;
	
	scanf("%[^\n]", str);
	len = strlen(str);


	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') cnt++;
	}

	if (str[0] == ' ') cnt--;
	if (str[len - 1] == ' ') cnt--;
	printf("%d", cnt + 1);

	return 0;
}