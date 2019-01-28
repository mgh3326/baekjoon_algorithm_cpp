#include<iostream>
using namespace std;
int solution(int input) {
	if (input == 1000)
		return 0;
	return input / 100 - (input / 10) % 10 == (input / 10) % 10 - input % 10;
}
int main(void) {
	int n = 0;
	scanf("%d", &n);
	if (n < 100)
	{
		printf("%d", n);
	}
	

	else {
		int answer = 99;
		for (int i = 110; i <= n; i++)
		{
			if (solution(i) == 1)
			{
				answer++;
			}
		}
		printf("%d", answer);
	}
	printf("\n");
}