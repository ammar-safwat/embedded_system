
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an Integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("your value :\t%d",x);
}
