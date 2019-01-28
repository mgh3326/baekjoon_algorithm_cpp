#include<iostream>
#include<math.h>
int is_odd(int num) {
	int root = sqrt(num);
	for (int i = 2; i <= root; i++)
	{
		if (num%i == 0)//소수가 아니다.
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int n = 0;
	int answer = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		scanf("%d", &temp);
		if (temp > 1)
		{
			if (is_odd(temp) == 0)
			{
				answer++;
			}
		}
	}
	printf("%d\n", answer);
	return 0;
}