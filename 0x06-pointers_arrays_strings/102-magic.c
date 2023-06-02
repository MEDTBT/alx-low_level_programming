#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	memset(p + 5, 98, sizeof(int));
	/*Set the value of a[2] indirectly through pointer arithmetic */
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
