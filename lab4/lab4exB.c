/* lab4exB.c
 * ENSF 337 Fall 2020 Lab 4 Exercise  B
 */

#include <stdio.h>

void funct (const char x [8], char y[], int n);

int main()
{
    // It is unusual to intialize a string with '\0' in the middle of string,
    // but it's allowed and we did it delibrately for the educational pruposes.
    const char* sc = "\n\0map";
    printf("the string sc is %s\n",sc);
    char sa[5] = {'\0'};
    
    while (*sc) sc++;
    printf("the string sc is %s\n",sc);
    sc += 3;
    printf("the string sc is %s\n",sc);
	printf("the string sa is %s\n",sa);
    // Point One
   
    funct(sc, sa, &sa[5] - &sa[0]);
    printf("the string sc is %s\n",sc);
	printf("the string sa is %s\n",sa);
    return 0;
}

void funct (const char x[8], char y[], int n)
{
    
    while (n ) {
        y[0] = x[0];
        n--;
        x--;
        y++;
    }
    
    // Point Two
    
}
