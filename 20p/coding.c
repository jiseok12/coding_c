#include <stdio.h>
int main() {
	int a;
	int Ape[101];
	int Bpe[101];
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &Ape[i]);
	}
	for(int i=0;i<a;i++){
		scanf("%d", &Bpe[i]);
	}
	for(int i=0;i<a;i++){
		if(Ape[i]==1 && Bpe[i]==3||Ape[i]==2 && Bpe[i]==1||Ape[i]==3 && Bpe[i]==2)
			printf("A\n");
		else if(Ape[i]==Bpe[i])
			printf("D\n");
		else	
			printf("B\n");
	}
	return 0;
}
