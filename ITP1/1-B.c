#include <stdio.h>

int main(void)
{
	int in, ans, i;

	ans = 1;
	scanf("%d",&in);
	for (i = 0;i < 3;i++)
		ans *= in;
	printf("%d\n", ans);
	return (0);
}