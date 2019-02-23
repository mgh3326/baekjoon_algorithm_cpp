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

	//n-k 만큼 반복문으로 최소 분산을 찾고 최소 표준편차를 출력해주면 된다.
	//근데 k개 말고 k+1, k+2개도 봐서 최소가 있으면 해줘야되는데 아마 그 근방 왼쪽 오른쪽을 추가해주는 방향으로 해주면 될듯하다.
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
			mean = mean / temp;//평균 구했다.
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
	result = floor(result * 100000000000) / 100000000000; //반올림 되는거 버리기

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