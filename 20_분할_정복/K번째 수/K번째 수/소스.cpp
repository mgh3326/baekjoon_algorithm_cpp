#include<iostream>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n,int k)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array 
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		if (i == k - 1)
		{
			std::cout << arr[min_idx];
			printf("\n");
			break;
		}
		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]);
		
	}
}
void bubble_sort(int list[], int n,int k) {
	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		// 0 ~ (i-1)���� �ݺ�
		for (j = 0; j < i; j++) {
			// j��°�� j+1��°�� ��Ұ� ũ�� ���� �ƴϸ� ��ȯ
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
		if (i == k - 1)
		{
			std::cout << list[k - 1];
			printf("\n");
		}
	}
}

int main(void) {
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (n /2 >= k)
	{
		selectionSort(arr, n, k);//�������� �������� ���� �ؾߵǳ�

	}
	else
	{
		bubble_sort(arr, n, k);//�������� �������� ���� �ؾߵǳ�

	}
	return 0;
}

/*
5 5
4 1 2 3 5

*/