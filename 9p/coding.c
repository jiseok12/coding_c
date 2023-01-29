#include <stdio.h>
int cnt[50001];
int main() {
	int a;
	
	scanf("%d", &a);
	
	for(int i=1;i<=a;i++){
		for(int j=i;j<=a;j=j+i){
			cnt[j]++;
		}
	}
	
	for(int i=1;i<=a;i++){
		printf("%d ", cnt[i]);
	}
	return 0;
}
