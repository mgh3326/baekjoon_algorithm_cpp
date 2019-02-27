#include<iostream>
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int *arr = new int[num];
	//값 입력
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	//bubble sort
	int unsorted_num = num;
	while (true) {
		if (unsorted_num == 1)
		{
			break;
		}
		for (int i = 0; i < unsorted_num-1; i++)
		{
			//swap 하자
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		unsorted_num--;
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

/*
5
5
2
3
4
1

*/