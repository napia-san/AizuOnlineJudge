#include <stdio.h>
int	main(void)
{
	int	W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if (!(r <= x && x <= W - r) || !(r <= y && y <= H - r))
		printf("No\n");
	else
		printf("Yes\n");
}