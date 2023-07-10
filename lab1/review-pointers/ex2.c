#include <stddef.h>
#include <assert.h>

// Swap the values of the integer variables pointed to by p1 and
// p2.  After the function returns, the variable pointed to by p1
// should have the value once pointed to by p2, and vice-versa.
//
// You may use a temporary variable or do an XOR swap.

// DEFINITION //
// DEREFERENCE: goes to an address to get the value stored there (uses *)
// ADDRESS EXTRACTOR: The & operator can be used to get the address of some variable, as with (&n)
void
swap(int *p1, int *p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);

	int tmp = 0;
	tmp = *p1; // dereference p1 and store value in tmp
	*p1 = *p2; // dereference p2 and overides value stored in p1. Now p1 = *p2
	*p2 = tmp; // assigns tmp to value stored or referenced by p2. Now p2 = *p1
}
