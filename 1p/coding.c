#include <stdio.h>
int main() {
	int a,b;
	int sum=0;
	scanf("%d %d",&a, &b);
	for(int i=1;b*i<=a;i++){
		sum=b*i+sum;
	}
	printf("%d", sum);
	return 0;
}
