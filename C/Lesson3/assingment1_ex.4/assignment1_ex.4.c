
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	printf("enter two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("product= %f",x*y);
}
