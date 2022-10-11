
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	printf("Enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b:");
    fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	printf("After swapping, value of a =%f \n",y);
	printf("After swapping, value of b =%f",x);

}
