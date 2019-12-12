#include <iostream>
#include "../include/my_lib.h"


int main(int argc, char *argv[])
{
	printf("aaa\n");
	__ERROR
		printf("aaa\n");
	__CORRECT
		printf("aaa\n");
	__NORMAL
		printf("aaa\n");

	return 0;
}

