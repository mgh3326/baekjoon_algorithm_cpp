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
		if (input[index] == '\0')//�ΰ� ���ٰ� Ʋ�ȴٰ� �߳�����
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