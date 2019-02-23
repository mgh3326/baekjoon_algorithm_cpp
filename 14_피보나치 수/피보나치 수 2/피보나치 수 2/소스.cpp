#include<iostream>


int main(void) {
	int num = 0;
	scanf("%d", &num);
	unsigned long  int old_num = 0;
	unsigned long  int new_num = 1;
	for (int i = 0; i < num - 1; i++)
	{
		unsigned long  int temp = new_num;
		new_num = old_num + new_num;
		old_num = temp;
	}
	std::cout << new_num;
	printf("\n");

}