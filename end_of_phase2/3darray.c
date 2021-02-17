#include <stdio.h>

int main ()
{
	char a[][2][2] = {
					{
						{2, 4},
						{1, 3}
					},
					{
						{5, 7},
						{6, 9}
					}
				};

	printf("a : %u\n", a);
	printf("&a : %u\n", &a);
	printf("**a : %u\n", **a);
	printf("***a : %u\n", ***a);
	printf("&a+1 : %u\n", &a+1);
	printf("a+1 : %u\n", a+1);
	printf("*a+1 : %u\n", *a+1);
	printf("***a+1 : %u\n", ***(a+1));

	printf("size of a = %d\n", sizeof(a));
	printf("size of *a = %d\n", sizeof(*a));
	printf("size of **a = %d\n", sizeof(**a));
	return 0;
}
