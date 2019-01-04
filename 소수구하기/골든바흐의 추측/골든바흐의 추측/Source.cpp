#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
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
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int answer = 0;
		int input = 0;
		scanf("%d", &input);

		for (int i = 0; i < input / 2; i++)
		{
			if (is_odd(input / 2 - i) == 0 && is_odd(input - (input / 2 - i)) == 0) {//소수 라면
				printf("%d %d\n", input / 2 - i, input - (input / 2 - i));
				break;
			}
		}

	}
	return 0;
}