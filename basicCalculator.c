#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int num1;
	int num2;
	printf("This is a basic calculator...");
	printf("Please enter the first integer: ");
	scanf("%d",&num1);
	printf("Please enter the second integer: ");
	scanf("%d",&num2);
	printf("The addition of the two integer is %d\n",num1+num2);
	printf("The substraction of the two integer is %d\n",num1-num2);
	printf("The multiplication of the two integer is %d\n",num1*num2);
	printf("The division of the two integer is %d\n",num1/num2);
		
	return 0;
}