#include <stdio.h>

int main(void)
{
	int h, w;

	scanf("%d %d",&h ,&w);
	printf("%d %d\n", h * w , 2 * (h + w));
	return (0);
}