#include <stdio.h>
int main() {
	char input[100];
	int sum[11]={0,};
	int max=0;
	scanf("%s",input);
	for(int i=0;input[i]!='\0';i++){
		sum[input[i]-'0']++;
	}
	for(int i=1;i<=9;i++){
		if(sum[max]<sum[i])
			max=i;
		else if(sum[max]==sum[i]&&max<i)
			max=i;
	}
	printf("%d",  max);
	return 0;
}
