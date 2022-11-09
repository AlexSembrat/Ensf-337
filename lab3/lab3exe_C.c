/*
*  File Name: lab3exe_C.c
*  Assignment: Lab 3 Exercise C
*  Lab Section: B01
*  Completed by: Alexander Sembrat (30089188)
*  Submission Date: Oct 05th 2020
*/

#include <stdio.h>
#include <stdlib.h>

void pascal_triangle(int n);
/* REQUIRES: n > 0 and n <= 20
 PROMISES: displays a pascal_triangle. the first 5 line of the function's output
 should have the following format:
 row 0:  1
 row 1:  1   1
 row 2:  1   2   1
 row 3:  1   3   3   1
 row 4:  1   4   6   4   1
 */

int main() {
    int nrow;
    // These are ALL of the variables you need!
    printf("Enter the number of rows (Max 20): ");
    scanf("%d", &nrow);
    if(nrow <= 0 || nrow > 20) {
        printf("Error: the maximum number of rows can be 20.\n");
        exit(1);
    }
    
    pascal_triangle(nrow);
    return 0;
}

void pascal_triangle(int n) 
{
    int i,j,x;
	printf("row 0: 1\n");
	for(int i = 1; i < n; i++)
	{
		printf("row %d:", i);
		for(int j = 0; j < i+1; j++)
		{
			if(j==0||i==0)
			{
				x = 1;
			}
			else
			{
				x = x*(i-j+1)/j;
			}
			printf(" %d", x);
		}
		printf("\n");	
	}
}
