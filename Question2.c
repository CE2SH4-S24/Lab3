#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"




char **read_words(const char *input_filename, int *nPtr){
	
    char **word_list;        
    /*write your implementation here*/

    // !!READ C FILE HANDLING INSTRUCTIONS BEFORE PROCEEDING!! //

    // Step 1:  Open file "input_filename" in ASCII read mode
    // Step 2:  Read the first line of the text file as an integer into nPtr
    //          This is the number of valid lines in the text file containing words to be sorted
    // Step 3:  Allocate an array of nPtr number of char pointer under word_list
    // Step 4:  Allocate an array of characters for each word under word_list; 
    //          Read each line from the input file and save it in the allocated array.  
    // Step 5:  Close the file handle
    // Step 6:  (for debugging purpose) Print out the contents in the string array
    //          This is for your own confirmation.  Remove this printing code before submission.
    
    return word_list;

}

void swap(char **str1, char **str2)
{    
	/*this is a helper function that you can implement and use to facilitate your development*/
    
    // Hint: str1 and str2 are not just double pointers - they are single pointers passed-by-reference
    //       Therefore, you should treat *str1 and *str2 as changeable addresses of the start of their
    //       respective strings.

    // Hint 2: Swapping two strings in an array of strings is as easy as swapping the starting addresses
    //         of the two target strings to be swapped.  Review Lecture Contents!


}

void delete_wordlist(char **word_list, int size)
{
    /*This is a helper function that you MUST IMPLEMENT and CALL at the end of every test case*/
    /*THINK ABOUT WHY!!!*/

    // implement your table deletion code here //
   
    // Hint: Review how to deallocate 2D array on heap.  word_list is a 2D array of chars on heap.
    
}

void sort_words_Bubble(char **words, int size)
{   
	/*write your implementation here*/

    // !!IMPLEMENT SWAP() BEFORE ATTEMPTING THIS FUNCTION!! //

    // By this time you should be able to implement bubble sort with your eyes closed ;)

    // Hint: Use your own my_strcmpOrder to compare the ASCII size of the two strings, and
    //       use the returned result as the sorting reference.  

    // Hint: Use swap() if string swapping is required

    
}



void sort_words_Selection(char **words, int size){

    // This implementation of string-sorting function using Selection Sort contains 2 semantic bugs

    // Fix the code, and document how you've found the bugs using GNU debugger.
    // Take screenshots of the debugger output at the instance where you've determined every bug.

    // You will be tested again at the cross exam.

    // If you forgot how Selection Sort works, review the Lab 2 document.

    int i, j;    
    int min, minIndex;
    
    for(i = 0; i < size; i++)
    {
        minIndex = i;

        for(j = i + 1; j < size; j++)
        {
            if(my_strcmpOrder(words[i], words[j]) == 1)
            {
                minIndex = j;
            }                        
        }
       
        if(minIndex != j)
        {
            swap(&words[i], &words[minIndex]);
        }

    }
    
}
