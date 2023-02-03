#include <stdio.h>
int main() {
	int a[10][2];
	int count=0;
	char last=0;
	int count2=0;
	for(int i=0;i<=9;i++){
		scanf("%d", &a[i][0]);
	}
	for(int i=0;i<=9;i++){
		scanf("%d", &a[i][1]);
	}
	for(int i=0;i<=9;i++){
		if(a[i][0]>a[i][1]){
			count+=3;
			last='A';
		}
		else if(a[i][0]<a[i][1]){
			count2+=3;
			last='B';
		}
		else{
			count+=1;
			count2+=1;
		}
	}
	
	printf("%d %d\n", count, count2);
	
	if(count>count2){
		printf("A");
	}
	else if(count2>count){
		printf("B");
	}
	else{
		if(count==10&&count2==10&&last==0)
			printf("D");
		else
			printf("%c", last);
	}
	return 0;
}
