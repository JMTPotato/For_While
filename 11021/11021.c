#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, A, B = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i + 1, A + B);
	}
	return 0;
}