#include <stdio.h>
int main() {
	int a;
	int count=0;
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
		count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0) count++;
		}
		printf("%d ", count);
	}
	return 0;
}
