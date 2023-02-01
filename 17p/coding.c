#include <stdio.h>
int main() {
	int a;
	int cnt[10][2];
	int count=0;
	scanf("%d", &a);
	
	for(int i=0;i<a;i++){
		scanf("%d %d", &cnt[i][0], &cnt[i][1]);
	}
	
	for(int i=0;i<a;i++){
		for(int j=1;j<=cnt[i][0];j++){
			count=count+j;
		}
		if(cnt[i][1]==count)
			printf("YES\n");
		else
			printf("NO\n");
		count=0;
	}
	return 0;
}
