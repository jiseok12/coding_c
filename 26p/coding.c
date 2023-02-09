#include <stdio.h>

int cnt[10000];

int main() {
	int a;
	int count=1;
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i]);
	}
	
	for(int i=0;i<a;i++){
		for(int j=i;j>=0;j--){
			if(cnt[i]<=cnt[j]&&j!=i){
				count++;
			}
		}
		printf("%d ", count);
		count=1;
	}
	
	return 0;
}
