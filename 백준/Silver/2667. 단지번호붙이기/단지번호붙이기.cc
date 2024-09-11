#include <cstdio>
#include <queue>

using namespace std;

int mat[26][26];

struct dan {
	int x,y,t;
};

int main() {
	int i,j,n,cnt = 1,arr[360]={0,};
	queue<dan> q;

	scanf("%d",&n);
	for(i = 0 ; i < n ; i++) {
		for(j = 0 ; j < n ; j++) {
			scanf("%1d",&mat[i][j]);
		}
	}

	dan start;
	start.t = 0;
	for(i = 0 ; i < n ; i++) {
		for(j = 0 ; j < n ; j++) {
			if(mat[i][j] == 1) {
				start.x = i;
				start.y = j;
				mat[i][j] += cnt;
				q.push(start);

				while(!q.empty()) {
					dan temp = q.front();
					dan next;
					q.pop();

					if(temp.x+1 < n && mat[temp.x+1][temp.y] == 1) {
						mat[temp.x+1][temp.y] += cnt;
						next.x = temp.x+1;
						next.y = temp.y;
						next.t = temp.t+1;
						q.push(next);
					}
					if(temp.x-1 >= 0 && mat[temp.x-1][temp.y] == 1) {
						mat[temp.x-1][temp.y] += cnt;
						next.x = temp.x-1;
						next.y = temp.y;
						next.t = temp.t+1;
						q.push(next);
					}
					if(temp.y+1 < n && mat[temp.x][temp.y+1] == 1) {
						mat[temp.x][temp.y+1] += cnt;
						next.x = temp.x;
						next.y = temp.y+1;
						next.t = temp.t+1;
						q.push(next);
					}
					if(temp.y-1 >= 0 && mat[temp.x][temp.y-1] == 1) {
						mat[temp.x][temp.y-1] += cnt;
						next.x = temp.x;
						next.y = temp.y-1;
						next.t = temp.t+1;
						q.push(next);
					}
				}
				cnt++;
			}
		}
	}
    printf("%d\n",cnt-1);
	for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            arr[mat[i][j]]++;
        }
	}
	for(i = 2 ; arr[i] != 0 ; i++) {
        for(j = 2 ; arr[j] != 0 ; j++) {
            if(arr[j] < arr[j+1]) {
                int temp =  arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
	}
	for(i = i-1 ; i >= 2 ; i--) {
        printf("%d\n",arr[i]);
	}

	return 0;
}

