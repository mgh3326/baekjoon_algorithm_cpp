#include<iostream>
int main(void)
{
	int num1 = 0, num2 = 0;
	int result = 0;
	int max = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &num1, &num2);
		result -= num1;
		result += num2;
		if (max < result)
			max = result;
	}
	std::cout << max;
	printf("\n");
	return 0;
}