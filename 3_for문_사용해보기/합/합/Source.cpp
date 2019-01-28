#include<iostream>
using namespace std;
int main(void) {
	int n = 0;
	cin >> n;
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		answer += (i + 1);
	}
	cout << answer << "\n";
}