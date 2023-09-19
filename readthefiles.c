#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	FILE *userinformation;

	userinformation = fopen("userinformation.txt", "r");


	char myInfos[100];


	fgets(myInfos, 100, userinformation);


	printf("%s", myInfos);


	fclose(userinformation);
	return 0;
}