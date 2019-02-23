#include<iostream>
#include<math.h>
int first_arr[] = { 0,500, 300, 200, 50, 30, 10 };
int second_arr[] = {0, 512,256,128,64,32 };
int main(void) {
	int T = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		if (a > 21)
			a = 0;
		if (b > 31)
			b = 0;
		for (int j = 0; j < 7; j++)
		{
			int first = (j*(j + 1)) / 2;

			if (first >= a)
			{
				a = j;
				break;
			}
		}
		for (int j = 0; j < 7; j++)
		{
			int second = pow(2, j) - 1;


			if (second >= b)
			{
				b = j;
				break;
			}
		}
		int result = (first_arr[a] + second_arr[b ]) * 10000;
		printf("%d\n", result);
	}
	return 0;
}
/*
6
8 4
13 19
8 10
18 18
8 25
13 16
*/
