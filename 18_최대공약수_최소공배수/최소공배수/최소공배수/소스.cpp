#include<iostream>
long long int gcd(long long int a, long long int b) {//ū��, ������ �̷��� �����൵ �ڵ����� ���ֳ� �ű��� ����ü
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long int lcm(long long int a, long long int b) {
	return a * b / gcd(a, b);
}
int main(void) {
	long long int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << lcm(num1, num2);

	printf("\n");
}

/*
3
1 45000
6 10
13 17

*/