
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[100], position, c, n, value;

	    printf("Enter number of elements in the array\n");
	    fflush(stdin); fflush(stdout);
	    scanf("%d", &n);

	    printf("Enter %d elements\n", n);
	    fflush(stdin); fflush(stdout);
	    for (c = 0; c < n; c++)
	        scanf("%d", &array[c]);

	    printf("enter the location where you want to insert an new element\n");
	    fflush(stdin); fflush(stdout);
	    scanf("%d", &position);

	    printf("enter the value\n");
	    fflush(stdin); fflush(stdout);
	    scanf("%d", &value);

	    for (c = n - 1; c >= position - 1; c--)
	        array[c+1] = array[c];

	    array[position-1] = value;

	    printf("new array is\n");
	    fflush(stdin); fflush(stdout);

	    for (c = 0; c <= n; c++)
	        printf("%d\n", array[c]);
	    fflush(stdin); fflush(stdout);
	return 0;
}
