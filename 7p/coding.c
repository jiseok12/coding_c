#include <stdio.h>
int main() {
	char input[101];
	char qjs[101]={0,};
	int count=0;
	
	fgets(input, 100, stdin);
	
	for(int i=0;input[i]!='\0';i++){
		if('a'<=input[i]&&input[i]<='z'){
			qjs[count]=input[i];
			count=count+1;
		}
		else if('A'<=input[i]&&input[i]<='Z'){
			qjs[count]=input[i]+32;
			count=count+1;
		}//32 차이
	}
	qjs[count]='\0';
	printf("%s", qjs);
	return 0;
}
