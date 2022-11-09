/*
*  File Name: prog_two.c
*  Assignment: Lab 4 Exercise D
*  Lab Section: B01
*  Completed by: Alexander Sembrat (30089188)
*  Submission Date: Oct 12th 2020
*/

#include <stdio.h>
#include <limits.h>
#include "read_input.h"

#define SIZE 50

int main(void)
{
  double n = 0;
  char digits[SIZE];  

  int y = EOF;
  
  while (1)
    {
      printf("\n\nEnter an double or press Ctrl-D to quit: ");
      y = read_real(digits, SIZE, &n); 
  
      if(y == 1)
	printf("\nYour double value is: %lf", n);
      else if(y == EOF){
	printf("\nGood Bye.\n");
	break;
      }
      else
	printf("\n%s is an invalid double.", digits);
    }
    
  return 0;
}