#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(void) {
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	long double* arr = new long double[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		/*scanf("%Lf", &arr[i]);*/
	}
	long double result = -1;

	//n-k ��ŭ �ݺ������� �ּ� �л��� ã�� �ּ� ǥ�������� ������ָ� �ȴ�.
	//�ٵ� k�� ���� k+1, k+2���� ���� �ּҰ� ������ ����ߵǴµ� �Ƹ� �� �ٹ� ���� �������� �߰����ִ� �������� ���ָ� �ɵ��ϴ�.
	int index = 0;

	for (int i = 0; i < n - k + 1; i++)
	{

		int temp = k;
		while (true)
		{
			long double mean = 0;
			long double var = 0;
			if (i + temp > n)
				break;
			for (int j = 0; j < temp; j++)
			{
				mean += arr[i + j];
			}
			mean = mean / temp;//��� ���ߴ�.
			for (int j = 0; j < temp; j++)
			{
				var += (arr[i + j] - mean)* (arr[i + j] - mean) / temp;

			}
			if (result > var || result == -1)
			{
				result = var;

				index = i;
			}
			temp++;
		}
		
	}

	result = sqrt(result);
	result = floor(result * 100000000000) / 100000000000; //�ݿø� �Ǵ°� ������

	printf("%.11Lf\n", result);

	return 0;
}
/*
5 3
1 2 3 4 5

*/

/*
10 3
1 4 1 5 9 2 6 5 3 5

*/