#include <stdio.h>
int cnt[100][2];
int main() {
	int a;
	int count=1;
	int sum=0;
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i][0]);
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(cnt[i][0]<cnt[j][0]){
				count++;
			}
		}
		cnt[i][1]=count;
		count=1;
	}
	for(int i=0;i<a;i++){
		printf("%d ", cnt[i][1]);
	}
	return 0;
}
