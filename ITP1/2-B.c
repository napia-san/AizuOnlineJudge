#include <stdio.h>

int main(void)
{
	int inA, inB, inC;

	scanf("%d %d %d",&inA ,&inB, &inC);
	if (inA < inB && inB < inC)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}