/*
 * Input x=0~7,   output y=0
 * Input x=8~15,  output y=8
 * ...
 * Input x=32~39, output y=32
 * Can not use operator '*' and  '/'
 */
#include "stdio.h"

int func(int x)
{
	int y, z=1;

	// z << 3 mean times of 8
	while(x >= (z<<3))
		z++;
	z--;
	y = z << 3;
	return y;
}

int main(void)
{
	int y=0;

	y = func(5);
	printf("y=%d\n", y);

	y = func(39);
	printf("y=%d\n", y);
	return 0;
}
