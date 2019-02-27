#include<iostream>
int num = 0;
int *arr;
int **max;

int max_stair(int index,int last_index) {
	int kind = 0;
	if (last_index - index== 1)
	{
		kind = 1;

	}
	
	if (index==num-1)
	{
		max[index][0] = arr[index];
		max[index][1] = arr[index];//필요할까?
		return max[index][0];
	}
	if (index == num - 2)
	{
		

		if (kind == 0)//이전에 1칸을 오지 않음
		{
			max[index][kind] = arr[index] + max[index+1][kind];
		}
		else {//이전에 한칸을 옴
			max[index][kind] = arr[index];

		}
		return max[index][kind];
	}
	if (kind == 0)
	{

	}
		return 0;
}
int main(void) {
	scanf("%d", &num);
	 arr = new int[num];
	 max = new int*[num];
	 for (int i = 0; i < num; i++)
	 {
		 max[i] = new int[2];//1칸 갈때 못갈때

	 }
	 for (int i = 0; i < num; i++)
	 {
		 for (int j = 0; j < 2; j++)
		 {
			 max[i][j] = 0;
		 }
	 }
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	int result = arr[num];//마지막은 꼭 지나야햇으니까
	result += max_stair(0,0);
	std::cout << result;
	printf("\n");
}