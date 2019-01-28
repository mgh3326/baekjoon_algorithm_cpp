#include<iostream>
using namespace std;

int main(void) {
	int c = 0;
	scanf("%d", &c);
	int temp = 0;
	int num = 0;

	for (int i = 0; i < c; i++)
	{
		scanf("%d", &temp);
		int * arr;
		arr = new int[temp];
		int sum = 0;
		for (int i = 0; i < temp; i++)
		{
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		int index = 0;
		for (int i = 0; i < temp; i++)
		{
			if (arr[i] > double(sum) / temp)
			{
				index++;
			}
		}
		printf("%.3f%%", double(index) / temp * 100);

		delete arr;
		printf("\n");
	}
}