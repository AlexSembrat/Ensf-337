/* lab3exe_A.c
 * ENSF 337, Lab 3 Exercise A
 */

#include <stdio.h>


void reverse(const int *source, int n, int* reversed, int* m);

int main(void)
{
    int a[] = { 100, 9, 17, 0, 15 };
    int size_a;
    int i;
    int reversed[5];
    int n;
    
    size_a = sizeof(a) / sizeof(a[0]);
	int x=sizeof(a), y=sizeof(a[0]);
    printf("%d and %d\n", x, y);

    printf("a has %d elements:", size_a);
    for (i = 0; i < size_a; i++)
        printf("  %d", a[i]);
    printf("\n");
	printf("this is i in main %d\n", i);
    reverse(a, size_a, reversed, &n);
    printf("reversed values from a:");
    for (i = 0; i < n; i++)
        printf("  %d", reversed[i]);
    printf("\n");
    
    return 0;
}


void reverse(const int *source, int n_source,
             int* reversed, int* m)
{
    int i;
    *m = 0;
    for (i = n_source -1; i >= 0; i--) {
        reversed[*m] = source[i];
        (*m)++;
    }
	printf("this is i in reverse %d\n", i);
    printf("this is n%d", *m);
    /* point one  (NOTE: This is *outside* of the for loop.) */
}

