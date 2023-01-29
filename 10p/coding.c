#include <stdio.h>
int cnt[100][2];

int main() {
	int a;
	int sum=0;
	int count=0;
	int max=0;
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i][0]);
	}
	
	printf("\n");
	for(int i=0;i<a;i++){
		count=cnt[i][0];
		for(int j=1;j<=cnt[i][0];j=j*10){
			sum=count%10+sum;
			count=count/10;
		}
		cnt[i][1]=sum;
		if(cnt[i][1]>cnt[max][1])
			max=i;
		else if(cnt[i][1]==cnt[max][1]&&cnt[i][0]>cnt[max][0])
			max=i;
		
		sum=0;
	}
	printf("\n%d",cnt[max][0]);
	return 0;
}
//8 13 16 11 16