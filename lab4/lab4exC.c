/*
*  File Name: lab4exC.c
*  Assignment: Lab 4 Exercise C
*  Lab Section: B01
*  Completed by: Alexander Sembrat (30089188)
*  Submission Date: Oct 12th 2020
*/
#include <stdio.h>

#define ELEMENTS(a) sizeof(a) / sizeof(a[0])

int main()
{
    
    int size;
    int a[] = {45, 67, 89, 24, 54};
    double b[20] = {14.5, 61.7, 18.9, 2.4, 0.54};
    
    size = ELEMENTS(a);


    printf("Array a has 5 elements and macro ELEMENTS returns %d\n", size);
    
    size = ELEMENTS(b);
    
  
    printf("Array b has 20 elements and macro ELEMENTS returns %d\n", size);
    
    return 0;
}

