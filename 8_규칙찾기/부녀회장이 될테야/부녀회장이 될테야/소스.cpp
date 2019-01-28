#include<stdio.h>
int main(void) {
	int arr[15][15] = { 0, };//0으로 모두 초기화 해주기
	for (int i = 0; i < 15; i++)//0층 1호부터 채우자
	{
		arr[0][i] = i;
	}
	for (int k = 1; k < 15; k++)
	{
		for (int i = 0; i < 15; i++)//0층 1호부터 채우자
		{
			int temp = 0;
			for (int j = 0; j < i + 1; j++)
			{
				temp += arr[k - 1][j];
			}
			arr[k][i] = temp;
		}
	}
	int index = 0;

	scanf("%d", &index);
	for (int i = 0; i < index; i++)
	{
		int answer = 0;

		int k = 0, n = 0;
		scanf("%d", &k);
		scanf("%d", &n);

		answer = arr[k][n];
		printf("%d\n", answer);
	}
}/*
2
1
3
2
3

*/

