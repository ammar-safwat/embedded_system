#include <stdio.h>
#include <stdlib.h>

   int main(void) {
	int a[2][3];          /*initialise the main matrix*/
	int r,c ;               /*Initialise r:row and c:column*/
	int t[2][3];          /*initialise the transposed matrix*/

		/* make the user insert the matrix elements every element in it's location*/
		for(r=0;r<2;r++){
			for(c=0;c<3;c++){
				printf("Enter the item (%d %d) :",r,c);
				fflush(stdin); fflush(stdout);
				scanf("%d",&a[r][c]);
			}
		}
	   /*printing the main matrix*/
		printf("The matrix is : \n");
		for (r=0;r<2;r++){
			for(c=0;c<3;c++){
				printf("%d\t",a[r][c]);
			}
			printf("\r\n");
		}
		/*printing the transposed matrix*/
		printf("The Transpose matrix is: \n");
		for(r=0;r<3;r++){
			for(c=0;c<2;c++){
				t[r][c]= a[c][r];
			}
		}
		for(r=0;r<3;r++){
			for(c=0;c<2;c++){
				printf("%d\t",t[r][c]);
			}
			printf("\r\n");
		}
		return 0;
}
