#include <stdio.h>
int main() {
	char input[30];
	int count=0;
	int count2=0;
	int error=0;
	scanf("%s",input);

	for(int i=0;input[i]!='\0';i++){
		if(input[i]=='('){
			if(input[i+1]=='\0')
				error=1;
			count++;
		}
		else if(input[i]==')'){
			if(count==0){
				error=1;
			}
			count2++;
		}
			
	}
	if(error==1){
		printf("NO");
	}
	else{
		printf("%s", count==count2?"YES":"NO");
	}
	return 0;
}
