#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{	
	FILE *userinformation;

	userinformation = fopen("userinformation.txt", "w");


	fprintf(userinformation, "Sıla Tahmaz");


	fclose(userinformation);
	return 0;
}