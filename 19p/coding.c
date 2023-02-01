#include <stdio.h>
int main() {
	int peli[101]={0,};
	int a, fail=0;
	int count=0;
	
	scanf("%d", &a);
	
	for(int i=0;i<a;i++){
		scanf("%d", &peli[i]);
	}
	
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(peli[i] <= peli[j]){
				fail=1;
				j=a;
			}
		}
		if(fail==0){
			count++;
			//printf("%d\n", peli[i]);
		}
		
		fail=0;
	}
	printf("%d", count);
	return 0;
}
