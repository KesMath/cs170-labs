// Assign the value of 5 to the integer variable pointed
// to by ptr.
//
// This should only take one line of code!
#include <stdio.h>

void
set_to_five(int *ptr)
{
	printf("%p\n", ptr); // prints address
	printf("%i\n", *ptr); // dereferences ptr to get value stored there = 3
	*ptr = 5; // goes to an address to get the value stored there and assign it to 5! Cannot simply do ptr = 5 which will just overrite the memory address of ptr = 0x5!!
	printf("%i\n", *ptr); // confirm that value at that address is 5! 
}
