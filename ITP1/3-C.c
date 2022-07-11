#include <stdio.h>
#include <stdlib.h>
void	swap(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int	main(void)
{
	short *in1, *in2, size, i;

	in1 = (int *)malloc(sizeof(int) * 3000);
	in2 = (int *)malloc(sizeof(int) * 3000);
	i = 0;
	while (1)
	{
		scanf("%d", &in1[i]);
		scanf("%d", &in2[i]);
		if (in1[i] == 0 && in2[i] == 0)
			break;
		if (in1[i] > in2 [i])
			swap(&in1[i], &in2[i]);
		i++;
	}
	size = i;
	while (0 < i)
	{
		printf("%d %d\n",in1[size - i] , in2[size - i]);
		i--;
	}
	free(in1);
	free(in2);
	return (0);
}