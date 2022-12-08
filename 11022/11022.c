#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, A, B, C = 0;

	scanf("%d", &T);

	for (int x = 1; x <= T; x++)
	{
		scanf("%d %d", &A, &B);
		C = A + B;
		printf("Case #%d: %d + %d = %d\n", x, A, B, C);
	}

	return 0;
}