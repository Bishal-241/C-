#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printdate(){
	tm mytime;
	printf("%d\n",mytime.tm_mon);
}

int main(int argc, char const *argv[])
{
	// printf("Hello world\n");
	// wish();
	printdate();

	return 0;
}

