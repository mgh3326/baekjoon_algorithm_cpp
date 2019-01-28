#include<iostream>
using namespace std;
int main(void)
{
	int N = 0;
	cin >> N;

	int maxY = N / 5;
	for (int i = 0; i <= maxY; i++)
	{
		if ((N - 5 * (maxY - i)) % 3 == 0)
		{
			cout << (N - 5 * (maxY - i)) / 3 + maxY - i << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
	return 0;
}