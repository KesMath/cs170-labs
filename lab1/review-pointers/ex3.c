#include <stddef.h>
#include <assert.h>

// Return the sum of all elements in the given array.  The array
// "arr" has "n" elements.
//
// Note that before, we used pointers to reference single variables
// in memory, but now we are using them to refer to many elements.
// The "arr" pointer points to the first element in the array in memory.
// Because pointers themselves don't carry any length information
// (like array objects do in Java), we generally have to pass in a
// length parameter to functions which use pointers to reference
// arrays.
int
array_sum(int *arr, int n)
{	
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		int val = 0;
		sum += arr[i];
		
		// ANOTHER WAY - ALBEIT, LESS EFFICIENT!
		//int* addy = &arr[i]; // extract address of first integer in array and store it inside of addy pointer... the compiler knows to proceed or consume 4 bytes since integers are 32 bits
		//sum += *addy; // deference addy to get value stored there and accumulate it to sum var
	}
	
	return sum;
}
