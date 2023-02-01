#include <stdio.h>
int main() {
	int a,b;
	int max=0;
	int count=0;
	int list[101]={0,};
	scanf("%d %d", &a, &b);
	for(int i=0;i<a;i++){
		scanf("%d", &list[i]);
	}
	
	for(int i=0;i<=a;i++){
		if(list[i]>b){
			count++;
		}
		else{
			if(max<count)
				max=count;
			count=0;
		}
	}
	
	if(max==0)
		printf("-1");
	else
		printf("%d", max);
	return 0;
}
