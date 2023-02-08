#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, sam=0;
	int num[100]={0,};
	int sum[100]={0,};
	scanf("%d", &a);
	
	for(int i=0;i<a;i++){
		scanf("%d", &num[i]);
	}
	
	for(int i=0;i<a-1;i++){
		if(abs(num[i]-num[i+1])<a)
			sum[abs(num[i]-num[i+1])]++;
		else
			sam=1;
	}
	
	for(int i=1;i<a&&sam!=1;i++){
		if(sum[i]==0)
			sam=1;
	}
	
	if(sam==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}