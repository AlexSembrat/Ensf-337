/*
*  File Name: lab3exe_d.c
*  Assignment: Lab 3 Exercise D
*  Lab Section: B01
*  Completed by: Alexander Sembrat (30089188)
*  Submission Date: Oct 05th 2020
*/

#include <stdio.h>
#include <string.h>

int substring(const char *s1, const char *s2);
/* REQUIRES
 * s1 and s2 are valid C-string terminated with '\0';
 * PROMISES
 * returns one if s2 is a substring of s1). Otherwise returns zero.
 */

void select_negatives(const int *source, int n_source, int* negatives_only, int* number_of_negatives);
/* REQUIRES
 *   n_source >= 0.
 *   Elements source[0], source[1], ..., source[n_source - 1] exist.
 *   Elements negatives_only[0], negatives_only[1], ..., negatives_only[n_source - 1] exist.
 * PROMISES
 *   number_of_negatives == number of negative values in source[0], ..., source[n_source - 1].
 *   negatives_only[0], ..., negatives_only[number_of_negatives - 1] contain those negative values, in
 *   the same order as in the source array.                           */

int main(void)
{
    char s[] = "Hello there. General Kenobi."; //Originally "Knock knock! Who's there?"
    int a[] = { 24,-55, -10, 0, 43 }; //originally {-10, 9, -17, 0, -15}
    int size_a; 
    int i;
    int negative[5];
    int n_negative;
    
    size_a = sizeof(a) / sizeof(a[0]);
    
    printf("a has %d elements:", size_a);
    for (i = 0; i < size_a; i++)
        printf("  %d", a[i]);
    printf("\n");
    select_negatives(a, size_a, negative, &n_negative);
    printf("\nnegative elements from array a are as follows:");
    for (i = 0; i < n_negative; i++)
        printf("  %d", negative[i]);
    printf("\n");
    
    printf("\nNow testing substring function....\n");
    printf("Answer must be 1. substring function returned: %d\n" , substring(s, "Hello")); //originally "Who"
    printf("Answer must be 0. substring function returned: %d\n" , substring(s, "Kenowbi")); //originally "knowk"
    printf("Answer must be 1. substring function returned: %d\n" , substring(s, "Kenobi")); //originally "knock"
    printf("Answer must be 0. substring function returned: %d\n" , substring(s, "")); //originally ""
    printf("Answer must be 1. substring function returned: %d\n" , substring(s, "ere. General")); //originally "ck! Who's"
    printf("Answer must be 0. substring function returned: %d\n" , substring(s, "ere.General")); //originally "ck!Who's"
    return 0;
}

int substring(const char* s1, const char* s2)
{
    // This function is incomplete. Student must remove the next line and
    // complete this function...
    //printf ("\nFunction substring is incmplete and doesn't work.\n");
    int i,j,x;
	
	for(int i = 0; i < strlen(s1); i++){
		while(s1[i]==s2[j] && j<strlen(s2)){
			x++;
			i++;
			j++;
			if(x==strlen(s2)){
				return 1;
			}
		}
		x=0;
		j=0;
	}
			
	
    return 0;
}

void select_negatives(const int* source, int n_source, int* negatives_only, int* number_of_negatives)
{
    // This function is incomplete. Student must remove the next line and
    // complete this function...
    //printf ("\nFunction select_negatives is incmplete and doesn't work.\n");
    
    int i;
    *number_of_negatives = 0;
	for(int i = 0; i<n_source; i++){
		if(source[i]<0){
	
			negatives_only[*number_of_negatives] = source[i];
			(*number_of_negatives)++;
		}
	}
    
    return;
}

