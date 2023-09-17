//Date: 2023.09.17
//Purpose: A program for creating and using pointers

#include <stdio.h>

int main() {
	int myInt = 10; // creates int
	int* pMyInt = NULL; //declares pointer and initializing to NULL 
	pMyInt = &myInt; //assigning pointer with myInt's address in memory
	printf("Value of variable:%i\n", myInt);
	printf("Address of variable(with &variable operator):%#x\n", &myInt);
	printf("Value of the pointer:%#x\n", pMyInt);
	printf("Address of the pointer in hex with %%#x: %#x\n", &pMyInt);
	printf("Address of the pointer in platform specific with %%p: %p\n", &pMyInt);
	printf("Value of the pointer is pointing to: %i", *pMyInt);

	return 0;
}