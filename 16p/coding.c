#include <stdio.h>
char input[100];
char input2[100];
int a[100];

int main() {	
	int fail=0;
	scanf("%s",input);
	scanf("%s", input2);
	
	for(int i=0; input[i]!='\0'; i++){
		a[input[i]-64]++;
		a[input2[i]-64]++;
	}
	for(int i=0;i<=62; i++){
		if(a[i]%2!=0){
			fail=1;
			printf("NO");
			i=62;
		}
	}
	if(fail==0)
		printf("YES");
	//65~122
	return 0;
}
