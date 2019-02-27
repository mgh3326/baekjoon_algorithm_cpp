#include<iostream>
int n;
int find_max(int index,bool * check,int *max,int *arr,int level) {
	if (check[index]==true)
	{
		return max[index];
	}

		level++;
		if (level < n)//마지막 층 아니라면
		{
			int left = 0;
			int right = 0;

			if (check[index + level] == true)
			{
				left = max[index + level];
			}
			else
			{
				left = find_max(index + level, check, max, arr, level);

			}
			if (check[index + level+1] == true)
			{
				left = max[index + level+1];

			}
			else
			{
				right = find_max(index + level + 1, check, max, arr, level);

			}
			check[index] = true;
			if (left > right)
			{
				max[index] = arr[index] + left;
			}
			else
			{
				max[index] = arr[index] + right;
			}
			return max[index];

		}
		else//마지막 층
		{
			check[index] = true;
			max[index] = arr[index];
			return max[index];
		}
	
}
int main(void) {
	n = 0;
	scanf("%d", &n);
	int num = n * (n + 1) / 2;
	int *arr = new int[num];
	int *max = new int[num];
	bool *check = new bool[num];
	for (int i = 0; i < num; i++)
	{
		
		scanf("%d", &arr[i]);

	}
	std::cout<<find_max(0, check, max, arr, 0);
	printf("\n");
	return 0;
}