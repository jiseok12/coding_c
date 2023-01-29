#include <stdio.h>
int main() {
	int a;
	int count=0;
	int j=1;
	int sum=0;
	
	scanf("%d", &a);
	
	for(int i=1;i<=a;i++){
		for(j=1;j<=i;j=j*10){
			count++;
		}
		j=1;
		sum=sum+count;
		count=0;
	}
	printf("%d",sum);
	return 0;
}

