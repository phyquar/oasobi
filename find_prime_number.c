#include<stdio.h>
#include<math.h>

int main(void)
{
	int N, i, j,s;
	float k;
	printf("we find prime number\n");
	printf("from 1, to?\n");
	scanf("%f", &k);
	N = int(k);
	if (k < 2)
	{
		printf("much more integer!");
		return 0;
	}
	if (k-N != 0)
	{
		printf("input integer!!!");
		return 0;
	}
	printf("2\n");

	for (i = 3; i <= N; i = i + 2)
	{
		
		s = 0;
		for (j = 3; j <= int(sqrt(i));j= j + 2)
		{
			if (i%j == 0)
			{
				s = 1;
				break;
			}
		}
		if (s == 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}