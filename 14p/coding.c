#include <stdio.h>
int sum[101][2];
int cnt[101]={0,};

int main() {
	int a;
	int fail=0;	
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		scanf("%d", &sum[i][0]);
		sum[i][1]=sum[i][0];
		for(int j=1;j<=sum[i][0];j=j*10){
			cnt[i]=sum[i][1]%10+cnt[i];
			cnt[i]=cnt[i]*10;
			sum[i][1]=sum[i][1]/10;
		}
		cnt[i]=cnt[i]/10;
	}
	
	for(int i=0;i<a;i++){
		fail=0;
		for(int j=2;j<=cnt[i]/2;j++){
			if(cnt[i]%j==0){
				j=cnt[i];
				fail=1;
			}
		}
		
		if(fail==0&&cnt[i]!=1)
			printf("%d ", cnt[i]);
	}
	
	return 0;
}
