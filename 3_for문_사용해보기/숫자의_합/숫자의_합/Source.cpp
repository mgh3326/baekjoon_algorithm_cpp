#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n = 0;
	char input[100];
	cin >> n;
	cin >> input;
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		answer += input[i] - '0';
	}
	cout << answer << "\n";
	return 0;
}