#include <stdio.h>
int main() {
	int a=0;
	int cnt[100]={0,};
	int max=0;
	int other=0;
	int count=0;
	int save=-1;
	scanf("%d", &a);
	
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i]);
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(cnt[j]>cnt[max] && cnt[j]!=-1){
				max=j;
			}
			else if(cnt[j]!=-1){
				other=j;
			}
		}
		
		
		if(cnt[max]!=save||save == -1){
			count++;
			if(count==3){
				printf("%d",cnt[max]);
				break;
			}
			save=cnt[max];	
		}
		//printf("%d ", cnt[max]);
		cnt[max]=-1;
		max=other;
	}
	return 0;
}
