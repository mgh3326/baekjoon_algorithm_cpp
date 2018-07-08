#include<iostream>
using namespace std;
int main(void) {
	int n = 0;
	cin >> n;
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}