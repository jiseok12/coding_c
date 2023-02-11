#include <stdio.h>
int main() {
	char a[10];
	
	int count=1;
	int cda=0;
	int hda=0;
	int test=0;
	
	scanf("%s", a);
	
	for(int i=1;a[i]!='\0';i++){
		if(a[i]>='0' && a[i]<='9'){
			if(test==0){
				cda=cda*10+(a[i]-'0');
			}
			else{
				hda=hda*10+(a[i]-'0');
			}
		}
		else{
			test=1;
		}
	}
	if(cda==0)
		cda=1;
	if(hda==0)
		hda=1;
	//printf("%d %d\n", cda, hda);
	printf("%d", cda*12+hda);
	return 0;
}
