#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"


int my_strlen(const char * const str1)
{
	// Returns the length of the string - the number of characters, but IGNORING the terminating NULL character
	
}

int my_strcmp(const char * const str1, const char * const str2)
{
	// Return 0 if the two strings are not identical.  Return 1 otherwise.
	
	// Criteria 1: Check their lenghts. If they are not the same length, not equal.

	// Criteria 2: If their lengths are equal, check their contents char-by-char.  If mismatch found, not equal.

	// if passing the two criteria, strings equal.
}


int my_strcmpOrder(const char * const str1, const char * const str2)
{
	/* Alphabetically compares two strings.
    	If str2 is alphabetically smaller than str1 (comes before str1),
    	the function returns a 1, else if str1 is smaller than str2, the
    	function returns a 0.*/

	// if two strings are completely identical in order, return -1.

	// We are NOT looking for any custom alphabetical order - just use the integer values of ASCII characters

	
}


char *my_strcat(const char * const str1, const char * const str2){

	/* this is the pointer holding the string to return */
	char *z = NULL;
	
	/*write your implementation here*/
	



	/* finally, return the string*/
	return z;

	// VERY IMPORTANT!!  Where is the newly allocated memory being released?
	// THINK ABOUT MEMORY MANAGEMENT
	
}