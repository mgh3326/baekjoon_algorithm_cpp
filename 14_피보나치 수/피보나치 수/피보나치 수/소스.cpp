#include<iostream>


int main(void) {
	int num = 0;
	scanf("%d", &num);
	int old_num = 0;
	int new_num = 1;
	for (int i = 0; i < num - 1; i++)
	{
		int temp = new_num;
		new_num = old_num + new_num;
		old_num = temp;
	}
	printf("%d\n", new_num);

}