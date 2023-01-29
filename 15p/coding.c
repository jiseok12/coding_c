#include <stdio.h>
int main() {
	int a;
	int cnt[100];
	int count=1;
	int err=0;
	scanf("%d",&a);
	for(int i=3;i<=a; i++){
		err=0;
		if(i%2!=0 && i% 3!=0 && i%5!=0 && i%7!=0 && i%11!=0 && i%13!=0 && i%17!=0 && i%19!=0 && i%191!=0){
			for(int j=2;j*j<=i;j++){
				if(i%j==0){
					j=i;
					err=1;
				}
			}
			if(err==0){
				count++;
			}
		}
		
		else if(i==3 || i==5||i==7||i==11||i==13||i==17||i==19||i==191){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
