#include <stdio.h>

unsigned short a, b;
int i;
int main()
{/* bit�....... 76543210
		        -------- */
	a=0b1000011000000011;
	
	for(i=15;i>=0;--i)
	{
		printf("%d", a & 0b0000000000000001 << i ? 1 : 0);
	}		
	
	printf("\n||||||||||||||||_0  \n");
	printf("|||||||||||||||__1  \n");
	printf("||||||||||||||___2  \n");
	printf("|||||||||||||____3  \n");
	printf("||||||||||||_____4  \n");
	printf("|||||||||||______5  \n");
	printf("||||||||||_______6  \n");
	printf("|||||||||________7  \n");
	printf("||||||||_________8  \n");
	printf("|||||||__________9  \n");
	printf("||||||___________10 \n");
	printf("|||||____________11 \n");
	printf("||||_____________12 \n");
	printf("|||______________13 \n");
	printf("||_______________14 \n");
	printf("|________________15 \n\n");
	
	printf("BitNum\tValue\n");
	printf("------\t-----\n");
	for(i=15;i>=0;--i)
	{	
		printf("[ %2d ]\t%3d\n",i, a & 0b0000000000000001 << i ? 1 : 0);
	}
	printf("___________________\n");
	printf("Dec: %14d\n\n",a);		
}


