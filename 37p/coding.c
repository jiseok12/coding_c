#include <stdio.h>

int n[1000];
int s[10];
int a,b;

int find(int y){
	int check=0;
	for(int i=0;i<a;i++){
		if(n[y]==s[i]){
			s[i]=0;
			for(int j=i;j>0;j--){
				s[j]=s[j-1];
			}
			s[0]=n[y];
			check=1;
			break;
		}
	}	
	
	if(check==0){
		for(int j=a-1;j>0;j--){
			s[j]=s[j-1];
		}
		s[0]=n[y];
	}
	return 0;
}

int main() {
	
	scanf("%d %d",&a, &b);
	
	for(int i=0;i<b;i++){
		scanf("%d",&n[i]);
	}
	
	s[0]=n[0];
	
	for(int i=1;i<b;i++){
		find(i);
	}
	
	for(int i=0;i<a;i++){
		printf("%d ", s[i]);
	}
	return 0;
}
