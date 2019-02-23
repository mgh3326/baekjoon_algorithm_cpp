#include<iostream>

int main(void) {
	for (int i = 0; i < 3; i++)
	{
		int temp = 0;
		int count = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &temp);
			if (temp == 0)
			{
				count++;
			}
		}
		if (count == 0)
		{
			printf("E\n");
		}
		else if (count == 1)
		{
			printf("A\n");

		}
		else if (count == 2)
		{
			printf("B\n");

		}
		else if (count == 3)
		{
			printf("C\n");

		}
		else if (count == 4)
		{
			printf("D\n");

		}
		else {

		}
	}
	return 0;
}

/*
0 1 0 1
1 1 1 0
0 0 1 1

*/