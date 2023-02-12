#include <stdio.h>
int main() {
	int a;
	int cnt[100]={0,};
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		scanf("%d", &cnt[i]);
	}
	for(int i=0;i<a;i++){
		if(cnt[i]<0)
			printf("%d ", cnt[i]);
	}
	for(int i=0;i<a;i++){
		if(cnt[i]>0)
			printf("%d ", cnt[i]);
	}
	return 0;
}
