#include<iostream>
#include<math.h>
int main(void) {
	long  long int min = 0, max = 0;
	std::cin >> min >> max;
	
	double m_root = sqrt(min);
	double n_root = sqrt(max);
	int left = ceil(m_root);
	int right = floor(n_root);
	int result = max - min+ 1;
	result = result - (right - left + 1);
	std::cout << result;
	printf("\n");
	return 0;
}
/*
1000000000000
1000001000000

*/