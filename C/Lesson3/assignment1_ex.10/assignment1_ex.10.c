
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a;
	printf("Enter the number");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);

	if (a>0){
		printf("%f is positive",a);
	}
	else if (a==0){
		printf("You Entered Zero");
	}
	else {
		printf("%f is negative",a);
	}
	return 0;
}
