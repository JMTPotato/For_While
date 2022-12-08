#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int X, N, a, b, sum;		//X=총 금액/		N=물건 종류의 수/		a=각 물건 가격/		b=개수
	sum = 0;

	scanf("%d", &X);
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		sum = sum + a * b;
	}


	if (sum == X)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}