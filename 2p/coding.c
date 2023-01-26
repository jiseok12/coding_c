#include <stdio.h>
int main() {
	int a,b,i,sum=0;
	
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++){
		printf("%d + ",i);
		sum= sum +i;
	}
	sum = sum +i;
	printf("%d = %d", i, sum);
	return 0;
}
