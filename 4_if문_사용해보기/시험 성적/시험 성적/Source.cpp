
#include<iostream>
using namespace std;
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	if (n > 89)
	{
		printf("A");
	}
	else if (n > 79)
	{
		printf("B");
	}
	else if (n > 69)
	{
		printf("C");
	}
	else if (n > 59)
	{
		printf("D");
	}
	else {
		printf("F");
	}
	printf("\n");
}