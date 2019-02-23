#include<iostream>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);

	if (num2 == 0 || num1 == num2)
	{
		std::cout << 1;
		printf("\n");
		return 0;
	}


	if (num2 > num1 - num2) //둘중의 작은 수가 되도록함
	{
		num2 = num1 - num2;
	}
	int answer = num1;
	for (int i = 1; i < num2; i++)
	{
		num1--;
		answer *= num1;
		answer /= (i + 1);

	}
	printf("%d\n", answer);
	return 0;
}