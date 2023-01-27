#include <stdio.h>
int main() {
	char input[30];
	int count=0;
	int count2=0;
	scanf("%s",input);
	
	for(int i=0;input[i]!='\0';i++){
		if(input[i]=='(')
			count++;
		else if(input[i]==')')
			count2++;
	}
	
	printf("%s", count==count2?"YES":"NO");
	return 0;
}
