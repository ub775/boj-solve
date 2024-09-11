#include <stdio.h>

int arr[10000] = {0};
int idx = 0;

int empty() {
	if(idx == 0) {
		return 1;
	}
	return 0;
}

void push(int num) {
	arr[idx] = num;
	idx++;
}

void pop() {
	if(empty()) {
		printf("-1\n");
		return;
	}
	printf("%d\n",arr[idx-1]);
	idx--;
	return;
}

void size() {
	printf("%d\n",idx);
}

void top() {
	if(empty()) {
		printf("-1\n");
		return;
	}
	printf("%d\n",arr[idx-1]);
}

int main() {
	int num,n;
	
	char str[5];
	
	scanf("%d",&n);

	while(n>0) {
		scanf("%s",&str);
		
		if(str[0] == 'p') {
			if(str[1] == 'u') {
				scanf("%d",&num);
				push(num);
			}
			else if(str[1] == 'o') {
				pop();
			}
		}
		else if(str[0] == 's') {
			size();
		}
		else if(str[0] == 'e') {
			printf("%d\n",empty());
		}
		else if(str[0] == 't') {
			top();
		}
		n--;
	}
	return 0;
}