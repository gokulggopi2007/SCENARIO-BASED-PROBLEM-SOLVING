#include<stdio.h>
#include<string.h>
int main()
{
	printf("Welcome to Bank\n");
	int account_number;
	printf("Enter Account number:");
	scanf("%d",&account_number);
	int total = 100000;
	if(account_number>=1 && account_number<=10){
		char str[5]="yes";
		printf("User Exists\n");
		while(strcmp(str,"yes")==0){
			printf("\n 1.DEPOSIT\n 2.WITHDRAW\n 3.BALANCE ENQUIRY\n 0.EXIT\n");
			int choice;
			printf("Enter your choice:");
			scanf("%d",&choice);
			if(choice==1){
				int deposit;
				printf("Enter amount to deposit:");
				scanf("%d",&deposit);
				total += deposit;
				printf("Amount deposited successfully!\n");
				printf("Now your account balance is:%d\n",total);
		    }
			else if(choice==2){
				int withdraw;
				printf("Enter amount to withdraw:");
				scanf("%d",&withdraw);
				if(withdraw > total){
					printf("Insufficient balance!\n");
				}
				else{
					total -= withdraw;
					printf("Amount withdraw successfully!\n");
					printf("Now your account balance is:%d",total);
				}
			}
			else if(choice==3){
				printf("You account balance is:%d\n",total);
		    }
		    else if(choice==0){
				printf("Thanks for coming. Visit again!\n");
				break;
		    }
		    else{
				printf("Invaid Input. Please try again.\n");
			}
			printf("\nDo you want to perform another transaction? (Yes/no):");
			scanf("%s",str);
		}
		printf("\nThank for coming. Visit again!");
    }
    else{
    	printf("Invaid Account Number");
    }
    return 0;
}
