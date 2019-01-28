#include <iostream>
using namespace std;

int main(void) {
	int x = 0, n = 0;
	scanf("%d %d", &n, &x);
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp < x)
		{
			printf("%d ", temp);
		}
	}
	printf("\n");

}