#include<iostream>
int count0 = 0;
int count1 = 0;
int fibonacci(int n) {
	if (n == 0) {
		count0++;
		return 0;
	}
	else if (n == 1) {
		count1++;
		return 1;
	}
	else {

		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main(void) {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < i < num; i++)
	{
		int input = 0;
		count0 = 0;
		count1 = 0;
		scanf("%d", &input);
		fibonacci(input);
		printf("%d %d\n", count0, count1);
	}
}