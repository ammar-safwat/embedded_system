
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c;
	printf("Enter Three numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);

	if (a>b && a>c){
		printf("biggest number is %f",a);
	}
	else if (b>a && b>c){
		printf("biggest number is %f",b);
	}
	else {
		printf("biggest number is %f",c);
	}
	return 0;
}
