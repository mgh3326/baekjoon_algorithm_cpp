#include<iostream>
using namespace std;
int main(void)
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && b >= c)
	{
		printf("%d", b);
	}
	else if (a >= c && c >= b)
	{
		printf("%d", c);

	}
	else if (b >= a & a >= c)
	{
		printf("%d", a);

	}
	else if (b >= c && c >= a)
	{
		printf("%d", c);

	}
	else if (c >= a && a >= b)
	{
		printf("%d", a);

	}
	else if (c >= b && b >= a) {
		printf("%d", b);

	}
	printf("\n");
	return 0;
}