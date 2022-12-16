#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Number;		//정수를 받는 변수
	int result;
	int A, B, C, D;

	int count = 0;

	scanf("%d", &Number);

	result = Number;

	while (1)
	{
		A = Number / 10;
		B = Number % 10;
		C = (A + B) % 10;
		D = (B * 10) + C;
		Number = D;
		count++;

		if (D==result)
		{
			break;
		}
	}

	printf("%d", count);

	return 0;
}



//참고 https://yongku.tistory.com/entry/%EB%B0%B1%EC%A4%80-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98BOJ-1110%EB%B2%88-%EB%8D%94%ED%95%98%EA%B8%B0-%EC%82%AC%EC%9D%B4%ED%81%B4C%EC%96%B8%EC%96%B4