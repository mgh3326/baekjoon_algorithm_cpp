#include<iostream>
#include<iostream>
int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main(void) {
	int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;
	std::cout << gcd(num1, num2) << std::endl;
	std::cout << lcm(num1, num2) << std::endl;
	return 0;
}