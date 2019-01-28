#include<iostream>
#include<stdlib.h>
int main(void) {
	int index = 0, m = 0, n = 0, x = 0, y = 0;
	/*index = 1;*/
	scanf("%d", &index);
	for (int i = 0; i < index; i++)
	{
		int answer = 0, diff = 0;
		/*m = 10, n = 12, x = 1, y = 12;*/
		scanf("%d %d %d %d", &m, &n, &x, &y);
		int temp = 0;

		if (m < n) {
			diff = n - m;
		}
		else {//x y 자리 바꾸고 n m 자리 바꿔주면 된다.
			diff = m - n;
			temp = n;
			n = m;
			m = temp;
			temp = x;
			x = y;
			y = temp;
		}
		temp = -y + x;
		if (x == y)
		{
			answer = y;
		}
		else if (temp%diff == 0 && temp > 0)
		{
			temp = temp / diff;
			temp *= m;
			temp += x;
			answer = temp;
		}
		else {
			temp = n - y + x;
			if (temp%diff == 0) {
				temp = temp / diff;
				temp *= m;
				temp += x;
				answer = temp;
			}
			else {
				answer = -1;

			}
		}
		printf("%d\n", answer);
	}

	return 0;
}