#include <iostream>
using namespace std;

int main(void) {
	int n = 0;
	scanf("%d", &n);
	int temp = 0;
	double sum = 0;
	int * arr;
	arr = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];

	}
	for (int i = 0; i < n; i++)
	{
		sum += double(arr[i]) / max * 100;

	}
	printf("%.2f\n", sum / n);
}