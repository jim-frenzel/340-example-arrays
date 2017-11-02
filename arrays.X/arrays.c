/* 
 * File:   arrays.c
 * Author: Dr J
 *
 * Created on November 2, 2017, 7:23 AM
 * 
 * Available on GitHub:
 * 
 * https://github.com/jim-frenzel/340-example-arrays.git
 * 
 * Simple example of "passing" arrays to functions that
 * works with the MPLAB simulator
 * 
 */

// #include <stdio.h>
// #include <stdlib.h>

void my_func(unsigned * ptr)
{
    ptr[0] += 1;    // ptr is a pointer variable pointing to element [0]
    ptr++;          // pointer now points to element [1]
    (*ptr)++;       // Dereference pointer to increment element [1]
    // Remaining elements unmodified
    }

void main() {
    
    // The name of an array is a pointer constant
    // that points to the first element in the array
    // That is, the value of my_array is the memory address
    // for my_array[0]
    
    unsigned my_array[]={1, 2, 3, 4};
    unsigned * ptr;     // uninitialized pointer variable
    
    ptr = my_array;     // initialize to value of my_array constant
    
    // burden is on my_func() not to access beyond array boundary!!
    
    my_func(my_array);  // Array is "passed" by providing pointer to array
    
    my_func(ptr+2);
    
    while(1);

}

