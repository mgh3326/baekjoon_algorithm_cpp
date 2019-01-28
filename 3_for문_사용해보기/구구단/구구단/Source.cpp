#include<iostream>
using namespace std;
int main(void) {
	int n = 1;
	cin >> n;
	for (int i = 0; i < 9; i++)
	{
		cout << n << " * " << i + 1 << " = " << n * (i + 1) << "\n";
	}
	return 0;
}