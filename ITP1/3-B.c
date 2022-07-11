#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *in, size, i;

	in = (int *)malloc(sizeof(int) * 10000);
	i = 0;
	while (1)
	{
		scanf("%d", &in[i]);
		if (in[i] == 0)
			break;
		i++;
	}
	size = i;
	while (0 < i)
	{
		printf("Case %d: %d\n",size - i + 1 , in[size - i]);
		i--;
	}
	free(in);
	return (0);
}