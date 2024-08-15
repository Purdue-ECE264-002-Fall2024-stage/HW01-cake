// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

void eliminate(int n, int k)
{
  // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
  // initialize all elements
  // You may initialize the elements to a number of your choice (e.g., 0)


  
  // counting to k,
  // mark the eliminated element; you choose the mark (e.g., 1)
  // print the index of the marked element
  // repeat until only one element is unmarked




  // print the last remaining index




  // release the memory of the array
  free (arr);
}

