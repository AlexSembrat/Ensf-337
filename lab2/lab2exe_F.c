/*
 *
 * lab2exe_F.c
 * ENSF 337 - Lab 2 - Execise F
 */
/********************************************************************
 One objective of this program is to use sizeof operator to find the number of
 bytes of memory alloacted for simple varibles, pointers, and arrays.
 
 The second objective is is to demonstrate how array notations in a function
 argument is still treated as a pointer.
 
 ********************************************************************/

#include <stdio.h>

void try_to_change(double* dest);
void try_to_copy(double dest[], double source[]);
double add_them (double a[5]);


int main(void)
{
    double sum = 0;
    double x[4];
    double y[] = {2.3, 1.2, 2.0, 4.0};
    printf(" sizeof(double) is %d bytes.\n", (int) sizeof(double));
    printf(" size of x in main is:  %d bytes.\n", (int) sizeof(x));
    printf(" y has %d elements and its size is:  %d bytes.\n",
           (int) (sizeof(y)/ sizeof(double)), (int) sizeof(y));
    
    /* Point one */
    printf("%lf is the size of sum\n", sizeof(sum));
    try_to_copy(x, y);
    
    try_to_change(x);
	printf("x4 is %lf\n", x[3]);
    
    sum = add_them(&y[1]);
    printf("\n sum of values in y[1], y[2] and y[3] is:  %.1f\n", sum);
    printf("y1 is %lf y2 is %lf y3 is %lf y4 is %lf\n", y[0],y[1],y[2],y[3]);
    return 0;
}


void try_to_copy(double dest[], double source[])
{
    dest = source;
    printf("\n sizeof(dest) in try_to_copy is %d bytes.\n", (int)sizeof(dest));
	printf("\n sizeof(source) in try_to_copy is %d bytes.\n", (int)sizeof(source));
    /* point two*/
    
    return;
}

void try_to_change(double* dest)
{
    dest [3] = 49.0;
    
    /* point three*/
    
    printf("\n sizeof(dest) in try_to_change is %d bytes.\n", (int)sizeof(dest));
    return;
}


double add_them (double arg[5])
{
    *arg = -8.25;
    
    /* point four */
    
    printf("\n sizeof(arg) in add_them is %d bytes.\n", (int) sizeof(arg));
    printf("\n Incorrect array size computation: add_them says arg has %d"
           " element.\n", (int) (sizeof(arg) / sizeof(double)));
    printf("arg1 is %lf arg2 is %lf arg3 is %lf arg4 is %lf\n", arg[0],arg[1],arg[2],arg[3]);
    return arg[0] + arg[1] + arg[2];
}
