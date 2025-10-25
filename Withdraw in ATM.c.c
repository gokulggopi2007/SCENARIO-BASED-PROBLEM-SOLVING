#include<stdio.h>
int main()
{
	int amount;
	printf("Enter the amount to withdraw:");
	scanf("%d",&amount);
	if(amount%10==0){
		int a=amount/500;
		printf("500:%d\n",a);
		int b=amount%500;
		int c=b/200;
		printf("200:%d\n",c);
		int d=b%200;
		int e=d/100;
		printf("100:%d",e);
	}
	else{
		printf("you cannot withdraw the amount");
	}
	return 0;
}
