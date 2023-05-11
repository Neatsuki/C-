#include <stdio.h>
int main(void)
{
	int num = 1;
	int *p = &num;
	
	printf("num的值是：%d\n", num);
	printf("&num的地址是: %p\n", &num);
	printf("*p的值是: %d\n", *p);
	printf("p的地址是: %p\n", p);
	return 0;
}
