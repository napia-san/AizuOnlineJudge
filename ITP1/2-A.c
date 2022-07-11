#include <stdio.h>

int main(void)
{
	int inA, inB;

	scanf("%d %d",&inA ,&inB);
	if (inA < inB)
		printf("a < b\n");
	else if (inA > inB)
		printf("a > b\n");
	else
		printf("a == b\n");
	return (0);
}