#include "stdio.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *su1, *su2;
	int res=0;

	for( su1=s1, su2=s2; 0<n; ++su1, ++su2, n--)
		if((res=*su1-*su2)!=0)
			break;

	return res;
}

int main(void)
{
	char a[5]="12345";
	char b[6]="123456";
	char c[5]="12456";;

	int res = 0;

	res = memcmp(a,b,5);
	printf("res1=%d\n", res);
	
	res = memcmp(a,c,5);
	printf("res2=%d\n", res);

	res = memcmp(a,c,2);
	printf("res3=%d\n", res);
	return 0;
}
