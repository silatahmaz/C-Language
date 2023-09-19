#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) 
{
	enum colors 
	{
		Red,
		Blue,
		Yellow,
	};

	
	enum colors type;


	type = Blue;


	if( type == Red )
		printf( "Type is Red\n" );
	else if( type == Blue )
		printf( "Type is Blue\n" );
	else
		printf( "Type is Yellow\n" );
	return 0;
}