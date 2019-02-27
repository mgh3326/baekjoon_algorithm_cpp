#include<iostream>
long long int gcd(long long int a, long long int b) {//큰수, 작은수 이런걸 안해줘도 자동으로 해주네 신기방기 그자체
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