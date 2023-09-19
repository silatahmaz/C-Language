#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int age;
	printf("If your age is greater or equal to the 18. You can vote");
	printf("Please enter your age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You can vote");
	}
	else
	{
		printf("You can not vote");	
	}
	return 0;
}