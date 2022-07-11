#include <stdio.h>

int main(void)
{
	int a, b, c, i, qt;

	qt = 0;
	scanf("%d %d %d",&a ,&b, &c);
	for (i = a;i <= b;i++)
		if (c % i == 0)
			qt++;
	printf("%d\n",qt);
	return (0);
}