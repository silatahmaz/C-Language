#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int num1;
	int num2;
	int choice;
	printf("Welcome to the calculator\n");
	printf("-------MENU-------\n");
	printf("1-Addition\n");
	printf("2-Substraction\n");
	printf("3-Multiplication\n");
	printf("4-Division\n");
	printf("Please enter the operation you want:");
	scanf("%d",&choice);
	printf("Please enter the first integer: ");
	scanf("%d",&num1);
	printf("Please enter the second integer: ");
	scanf("%d",&num2);
	switch(choice)
	{
		case 1 :
			printf("\nThe result is %d",num1+num2);
			break;
		case 2 :sssss
			printf("\nThe result is %d",num1-num2);	
			break;
		case 3 :
			printf("\nThe result is %d",num1*num2);	
			break;
		case 4 :
			printf("\nThe result is %d",num1/num2);	
			break;
		
	}

		
		
	return 0;
}