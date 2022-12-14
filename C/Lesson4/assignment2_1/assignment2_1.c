#include <stdio.h>
#include <stdlib.h>

void main() {
	float matrix_1[2][2];
	float matrix_2[2][2];
	float sum[2][2];
	int r,c;

	/* Enter 1st Matrix */
	printf("1st Matrix : \n");
	fflush(stdin); fflush(stdout);
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter the item (%d %d)",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix_1[r][c]);
		}
	}
	/* printing 1st Matrix*/
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%2.2f\t",matrix_1[r][c]);
		}
		printf("\r\n");
	}

	/* Enter 2nd Matrix */
	printf("2nd Matrix : \n");
	fflush(stdin); fflush(stdout);
		for(r=0;r<2;r++){
			for(c=0;c<2;c++){
				printf("Enter the item (%d %d)",r,c);
				fflush(stdin); fflush(stdout);
		        scanf("%f",&matrix_2[r][c]);
			}
		}
		/* printing 2nd Matrix*/
		for(r=0;r<2;r++){
			for(c=0;c<2;c++){
				printf("%2.2f\t",matrix_2[r][c]);
			}
			printf("\r\n");
		}

		/* Adding of matrices */
		printf("The addition of matrices is: \n");
		for(r=0;r<2;r++){
			for(c=0;c<2;c++){
				sum[r][c]=matrix_1[r][c] + matrix_2[r][c];
			}
		}
		/* printing sum*/
				for(r=0;r<2;r++){
					for(c=0;c<2;c++){
						printf("%2.2f\t",sum[r][c]);
					}
					printf("\r\n");
				}
	return 0;
}

