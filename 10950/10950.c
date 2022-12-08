#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, A, B;
	int i = 0;

	scanf("%d", &T);

	while (i < T)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
		i++;
	}
	return 0;
}