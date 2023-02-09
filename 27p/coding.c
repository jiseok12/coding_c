#include <stdio.h>
int cnt[1000];
int sum[1000];
int main() {
	int a;
	int count=0;
	int count2=0;
	int value;
	scanf("%d", &a);
	printf("%d! = ",a);
	for(int i=2;i<=a;i++){
		for(int j=2;j<=a;j++){
			if(i%j==0&&i!=j){
				count++;
				j=a+1;
			}
		}
		if(count==0){
			cnt[i]=1;
		}
		count=0;
	}
	
	for(int i=2;i<=a;i++){
		value=i;
		for(int j=2;;){
			if(cnt[value]>=1){
				sum[value]++;
				break;
			}
			else if(value%j==0&&cnt[j]>=1){
				sum[j]++;
				value=value/j;
			}
			else
				j++;
		}
	}
	for(int i=2;i<=a;i++){
		if(sum[i]>=1) printf("%d ", sum[i]);
	}
	return 0;
}
