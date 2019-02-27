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

int main(void) {
	int n = 0;
	scanf("%d", &n);
	int*arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}

	std::sort(arr, arr + n);
	for (int j = 2; j <= arr[n-1]; j++)
	{
		int temp = arr[0] % j;

		for (int i = 1; i < n; i++)
		{
			if (temp != arr[i] % j)
			{
				break;
			}
			if (i == n - 1)
			{
				std::cout << j << " ";
			}

		}
	}
	printf("\n");

	return 0;
}
/*
3
6
34
38

*/