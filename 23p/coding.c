#include <stdio.h>

int main() {
	int max=0;
	int a, next=0;
	int input=0, count=0;
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &input);
		if(input>=next){
			count++;
			next=input;
		}
		else{
			if(count>max)
				max=count;
			count=1;
			next=input;
		}
	}
	if(count>max){
		max=count;
	}
	printf("%d", max);
	return 0;
}
