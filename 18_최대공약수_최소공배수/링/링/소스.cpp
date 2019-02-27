#include<iostream>
#include<algorithm>

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int first = 0;

	scanf("%d", &first);
	for (int i = 0; i < n - 1; i++)
	{
		int temp = 0;
		scanf("%d", &temp);
		int result = gcd(first, temp);
		std::cout << first / result;
		printf("/");
		std::cout << temp/ result;
		printf("\n");

	}
	return 0;
}