#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int a = 0, b = 0, c = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int result = a * b*c;
	std::string s = std::to_string(result);
	for (int i = 0; i < 10; i++)
	{
		int index = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (i == s[j] - '0')
				index++;
		}
		printf("%d\n", index);
	}
	return 0;
}