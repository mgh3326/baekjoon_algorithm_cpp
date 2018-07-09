#include<iostream>
using namespace std;
int main(void) {
	int n = 0;
	scanf("%d", &n);
	int temp = 0;
	if (n < 10)
	{
		n = n * 10;
	}

	temp = n % 10 * 10 + n / 10 + n % 10;
	int answer = 0;
	while (true)
	{
		answer++;
		if (n == temp)
			break;
		temp = temp % 10 * 10 + (temp / 10 + temp % 10) % 10;
	}
	printf("%d\n", answer);
}
//26 68 84 42