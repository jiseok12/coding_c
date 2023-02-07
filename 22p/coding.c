#include <stdio.h>

int cnt[100000];

int main() {	
	int a, b;
	int max= 0;
	int count=0;
	int count2=0;
	int value=0;

	scanf("%d %d", &a, &b);
	
	
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i]);
		//printf("count: %d\n",i);
	}
	for(int i=0;i<a;i++){
		count=0;
		value=0;
		for(int j=i;j<a;j++){
			count++;
			value+=cnt[j];
			if(count==b){
				j=a;
				count2++;
			}
		}
		if(count!=b)
			i=a;
		else if(value>max)
			max=value;
	}
	
	printf("%d", max);
	
	return 0;
}
