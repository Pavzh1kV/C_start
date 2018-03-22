#include <stdio.h>

int main()
{
    union test{
        short s;
        unsigned char  c;
    } u;
          
	u.s = 0b0000000000000000;
	u.c =         0b11111111;	

	for(int i=15;i>=0;--i)
	{
		printf("%d", u.s & 1 << i ? 1 : 0);
	}
	
	printf("\ns: %d", u.s);
	printf("\nc: %d", u.c);
}




