
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float operand1,operand2;
	char operation;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operation);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&operand1,&operand2);

	switch (operation){
	case'+':
		printf("%f+%f=%f",operand1,operand2,operand1+operand2);
		break;
	case'-':
		printf("%f-%f=%f",operand1,operand2,operand1-operand2);
	    break;
	case'*':
		printf("%f*%f=%f",operand1,operand2,operand1*operand2);
		break;
	case'/':
		printf("%f/%f=%f",operand1,operand2,operand1/operand2);
		break;
	}
	return 0;
}
