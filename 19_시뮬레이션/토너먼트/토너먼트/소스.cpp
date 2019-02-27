#include<iostream>
int main() {
	int round = 1;
	int n = 0;
	int num1 = 0, num2 = 0;
	scanf("%d %d %d", &n, &num1, &num2);
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	while (true)
	{
		if (num2 == num1)
		{
			round = -1;
				break;
		}
		if (num2 - num1 == 1 && num1 % 2 == 1)
		{
			break;
		}
		n = n / 2;
		num1 = num1 / 2 + num1%2;
		num2 = num2 / 2 + num2 % 2;
		round++;
	}
	std::cout << round;
	printf("\n");
	return 0;
}