
#include<iostream>

int main(void) {
	unsigned long  int num = 0;
	std::cin >> num;
	unsigned long  int old_num = 0;
	unsigned long  int new_num = 1;
	for (int i = 0; i < num - 1; i++)
	{
		unsigned long long int temp = new_num % 1000000;
		new_num = (old_num + new_num) % 1000000;
		old_num = temp;
	}
	std::cout << new_num;
	printf("\n");


}