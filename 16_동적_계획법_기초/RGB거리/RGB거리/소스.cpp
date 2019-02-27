#include<iostream>
#define RGB_NUM 3
#define R 0
#define G 1
#define B 2
int** min;//min 이걸 그냥 -1로 해두고 check 하는걸로도 충분하겠네
int n = 0;
int**arr;
int min_rgb(int index,int kind)
{

	if (min[index][kind] > 0)
	{
		return min[index][kind];
	}
	int temp1=0,temp2=0;
	if (kind == 0)
	{
		temp1 = min_rgb(index + 1, 1);
		temp2 = min_rgb(index + 1, 2);
	}
	else if (kind == 1)
	{
		temp1 = min_rgb(index + 1, 0);
		temp2 = min_rgb(index + 1, 2);
	}
	else//kind==2
	{
		temp1 = min_rgb(index + 1, 0);
		temp2 = min_rgb(index + 1, 1);
	}
	if (temp1 > temp2)
	{
		min[index][kind] =arr[index][kind]+ temp2;
	}
	else {
		min[index][kind] = arr[index][kind]+temp1;
	}
	return min[index][kind];
}
int main(void) {
	
	scanf("%d", &n);
	arr = new int*[n];
	min = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[RGB_NUM];
		min[i] = new int[RGB_NUM];

	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < RGB_NUM; j++)
		{
			scanf("%d", &arr[i][j]);
			min[i][j] = 0;
		}
	}
	for (int j = 0; j < RGB_NUM; j++)
	{
		scanf("%d", &arr[n-1][j]);
		min[n - 1][j] = arr[n - 1][j];
	}
	
	int r = min_rgb(0, 0);
	int g = min_rgb(0, 1);
	int b = min_rgb(0, 2);
	int result = r;
	if (result > g)
	{
		result = g;
}
	if (result > b)
	{
		result = b;

	}
	std::cout << result;
	printf("\n");
	return 0;
}

/*
3
26 40 83
49 60 57
13 89 99

*/
