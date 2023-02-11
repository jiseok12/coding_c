#include <stdio.h>
int main() {
	int a=0;
	int cnt[100]={0,};
	int min=0;
	int other=0;
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i]);
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(cnt[j]<=cnt[min] && cnt[j]!=-1){
				min=j;
			}
			else if(cnt[j]!=-1){
				other=j;
			}
		}
		
		printf("%d ", cnt[min]);
		cnt[min]=-1;
		min=other;
	}
	return 0;
}
