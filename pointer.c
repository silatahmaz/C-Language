#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	int myAge = 43;     
	int* ptr = &myAge;  


	printf("%d\n", myAge);


	printf("%p\n", &myAge);


	printf("%p\n", ptr);
	return 0;
}