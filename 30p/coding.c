#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int count=0;
	int count2=0;
	int value=0;
	int save;
	save=a;
	for(int i=1;i<=save;i=i*10){// 1-0 10-0 100-2 
		if(a%10<3){
			count=(count2*i*(a%10))/10+count;
			//printf("%d : %d \n", a%10,(count2*i*(a%10))/10);
		}
		else if(a%10==3){
			count=(count2*i*(a%10))/10+count+save%i+1;
			//printf("%d : %d \n", a%10, (count2*i*(a%10))/10+1);
		}
		else if(a%10<=9&&count2!=0){
			count=((count2+1)*i)-(((10-a%10)*count2*i)/10)+count;
			//printf("%d : %d \n", a%10, ((count2+1)*i)-(((10-a%10)*count2*i)/10));
		}
		else if(a%10<=9&&count2==0){
			count=count+1;
			//printf("%d : %d \n", a%10, 1);
		}
		a=a/10;
		count2++;
	}
	printf("%d", count);
	return 0;
}