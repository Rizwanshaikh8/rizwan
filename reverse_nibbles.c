#include<stdio.h>
void main()
{
	int n = 0x12394578, x=0;
	while (n > 0)
	{
		x=x*16 + n%16;
		n = n/16;
	}
	printf("0x%x\n",x);
}		
