#include<stdio.h>
int main(void) {
	int index = 0;
	int answer = 0;
	scanf("%d", &index);
	for (int i = 0; i < index; i++)
	{
		int h = 0, w = 0, num = 0;
		int count = 1;
		scanf("%d %d %d", &h, &w, &num);
		while (true) {
			num -= h;
			count++;
			if (num < h)
				break;
		}
		if (num == 0)
		{
			num = h;
			count--;
		}
		else if (num < 0)
		{
			num += h;
			count--;
		}
		answer = num * 100 + count;


		printf("%d\n", answer);
	}
}
/*
2
6 12 10
30 50 72

*/

