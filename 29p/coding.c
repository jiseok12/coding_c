#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int count=0;
	int value=0;
	for(int i=1;i<=a;i++){
		value=i;
		for(int j=1;j<=i;j=j*10){
			if(value%10==3){
				count++;
			}
			value=value/10;
		}
		
	}
	printf("%d", count);
	return 0;
}
