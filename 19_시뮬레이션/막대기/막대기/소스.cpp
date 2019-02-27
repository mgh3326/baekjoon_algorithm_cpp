#include<iostream>
#define poll_size 64
int main(void)
{
	int x = 0;
	scanf("%d", &x);
	int result = poll_size;
	while (true)
	{
		if (result > x)
		{
			result /= 2;
		}
		else
		{
			break;
		}
	}
	int index = 1;
	int sum = result;
	while (true)
	{
		if (sum == x)
		{
			break;
		}
		else {
			if (sum + (result / 2) <= x)
			{
				index++;
				sum += result / 2;
			}
			result /= 2;

		}
	}
	std::cout << index;
	printf("\n");

	return 0;
}