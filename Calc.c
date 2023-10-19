#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int add();
int sub();
int mul();
int division();
void exit();

int main()
{
	int operation;
	do
	{
		printf("\tSelect the operation want to Perform in Calculator\n\n");
		printf("\n1.Addition  \t\t2.Subtraction \n3.Multiplication  \t4.Division \n5.Exit \n\n\t Please, make a Choice\n");
		
		scanf("%d",&operation);
		
		switch(operation)
		{
			case 1:
				add();
				break;
			
			case 2:
				sub();
				break;
				
			case 3:
				mul();
				break;
			
			case 4:
				division();
				break;
			
			case 5:
				exit(0);
				break;
				
			default:
				printf("\n\tInvalid Choice!!");
				break;
		}
		printf("\n\n****************************\n");
	}while(operation!=5);
	
	return 0;
}

int add()
{
	int i,sum=0,num,val; 
	printf("\nHow many no. you want to add\n");
	scanf("%d",&num);
	printf("Enter the Number:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&val);
		sum=sum+val;
	}
	printf("\nTotal Sum of the No.= %d",sum);
	return 0;
}

int sub()
{
	int n1,n2,res;
	printf("\nEnter the first no.");
	scanf("%d",&n1);
	printf("Enter the Second no.");
	scanf("%d",&n2);
	res=n1-n2;
	
	printf("\nThe sub. of the no. %d-%d = %d",n1,n2,res);
}

int mul()
{
	int n1,n2,res;
	printf("\nEnter the first no.");
	scanf("%d",&n1);
	printf("Enter the Second no.");
	scanf("%d",&n2);
	res=n1*n2;
	
	printf("\nThe Multiply of the no. %d*%d = %d",n1,n2,res);
	
}

int division(){
	int n1,n2,res;
	printf("\nEnter the first no.");
	scanf("%d",&n1);
	printf("Enter the Second no.");
	scanf("%d",&n2);
	
	if(n2==0){
		printf("\nDivisior cann't be 0, Please Enter another value");
		scanf("%d",n2);
	}
	res=n1/n2;
	printf("\nThe Division of %d and %d is %d ",n1,n2,res);
}
