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
		max[index][1] = arr[index];//�ʿ��ұ�?
		return max[index][0];
	}
	if (index == num - 2)
	{
		

		if (kind == 0)//������ 1ĭ�� ���� ����
		{
			max[index][kind] = arr[index] + max[index+1][kind];
		}
		else {//������ ��ĭ�� ��
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
		 max[i] = new int[2];//1ĭ ���� ������

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
	int result = arr[num];//�������� �� �����������ϱ�
	result += max_stair(0,0);
	std::cout << result;
	printf("\n");
}