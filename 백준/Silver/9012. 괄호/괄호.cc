#include <stdio.h>

int stack[50];
int n,idx = 0;

int empty() {
	if(idx == 0) {
		return 1;
	}
	return 0;
}

void push() {
	stack[idx]++;
	idx++;
}

void pop() {
	if(empty()) {
		return;
	}
	idx--;
	return;
}

int main() {
	int i;
	scanf("%d",&n);
	
	while(n>0) {
		char str[50];
		int flag = 1;
		idx = 0;
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++) {
			if(str[i] == '(') {
				push();
			}
			else if(str[i] == ')') {
				if(empty()) {
					flag = 0;
					break;
				}
				pop();
			}
		}
		if(flag == 1 && idx == 0 ) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		n--;
	}
	return 0;
}