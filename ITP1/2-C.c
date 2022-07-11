#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	*in, size, i, j, tmp;

	size = 3; //size of input_array
	in = (int *)malloc(sizeof(int) * size);

	for (i = 0;i < size;i++)
		scanf("%d", &in[i]);
	for (i = 0;i < size;i++)
	{
		j = i + 1;
		while (j < size)
		{
			if (in[i] > in[j])
			{
				tmp = in[i];
				in[i] = in[j];
				in[j] = tmp;
			}
			j++;
		}
	}
	for (i = 0;i < size;i++)
	{
		printf("%d", in[i]);
		if (i < size - 1)
			printf(" ");
	}
	printf("\n");
	free (in);
	return (0);
}