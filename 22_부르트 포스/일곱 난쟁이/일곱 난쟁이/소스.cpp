#include<iostream>
#include<algorithm>
#define peopleNumber 9
#define originPeople 7

int main(void) {

	int arr[9];
	int sum = 0;
	for (int i = 0; i < peopleNumber; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}
	std::sort(&arr[0], &arr[9]);
	for (int i = 0; i < 9; i++)
	{
		
		int temp = sum;
		temp -= arr[i];
		for (int j = i + 1; j < 9; j++)
		{
			int temp2 = temp;
			temp2 -= arr[j];
			if (temp2 == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						std::cout << arr[k];
						printf("\n");
					}
				}
				return 0;
			}

			if (temp2 < 100)
				break;

		}
	}

	return 0;
}
/*
20
7
23
19
10
15
25
8
13

*/