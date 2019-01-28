#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	char input[100];
	cin >> input;
	int answer = 0;
	int index = 0;
	while (true)
	{
		if (input[index] == '\0')//널값 출력됬다고 틀렸다고 했나보다
		{
			break;
		}
		cout << input[index];

		if ((index + 1) % 10 == 0 && index > 0)
		{
			cout << "\n";
		}
		index++;

	}

	cout << "\n";
	return 0;
}