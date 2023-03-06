#include <stdio.h>
int n[100];
int cp[101];
int main() {
	int a,count=0,j;
	
	scanf("%d", &a);
	
	for(int i=1;i<=a;i++){
		scanf("%d", &n[i]);
	}
	
	for(int i=1;i<=a;i++){
		for(j=1;count<=n[i];j++){
			if(cp[j]==0)
				count++;
		}
		cp[j-1]=i;
		count=0;
	}
	
	for(int i=1;i<=a;i++){
		printf("%d ", cp[i]);
	}
	return 0;
}
