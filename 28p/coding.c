#include <stdio.h>

int main() {
	int a;
	int five=0;
	int second=0;
	int value;
	scanf("%d", &a);
	
	for(int i=2;i<=a;i++){
		value=i;
		for(;;){
			if(value%2==0){
				second++;
				value=value/2;
			}
			else if(value%5==0){
				five++;
				value=value/5;
			}
			else
				break;
		}
	}
	
	if(five>second)
		printf("%d", second);
	else
		printf("%d", five);
	return 0;
}
