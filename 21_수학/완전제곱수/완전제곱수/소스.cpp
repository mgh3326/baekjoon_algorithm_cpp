#include<iostream>
#include<math.h>
int main(void) {
	int m = 0, n = 0;
	scanf("%d",&m);
	scanf("%d",&n);
	double m_root=sqrt(m);
	double n_root=sqrt(n);
	int left = ceil(m_root);
	int right = floor(n_root);
	int sum = 0;
	int min = left*left;
	if (left > right)
	{
		std::cout << "-1";
	}
	else
	{
		for (int i = left; i <= right; i++)
		{
			sum += i * i;

		}
		std::cout << sum << std::endl << min;
	}
	printf("\n");
	return 0;
}