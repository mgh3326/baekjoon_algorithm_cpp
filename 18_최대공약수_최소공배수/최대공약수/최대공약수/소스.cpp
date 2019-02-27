#include<iostream>
#include<iostream>
long long int gcd(long long int a, long long int b) {
	while (b != 0) {
		long long int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
void num_to_one(long long int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("1");
	}
}
int main(void) {
	long long int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;
	/*num1 = num_to_one(num1);
	num2 = num_to_one(num2);*/
	num_to_one(gcd(num1, num2));
	printf("\n");

	return 0;
}