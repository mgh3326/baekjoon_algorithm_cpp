#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;

		stack<char> s;
		bool result = true;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
			{
				s.push('(');
			}
			else {
				if (s.empty() != true)
				{
					s.pop();

				}
				else {
					result = false;
					break;
				}
			}
		}
		if (result == true && s.empty() == true)
		{
			result = true;
		}
		else {
			result = false;
		}
		if (result == true)
		{
			printf("YES\n");
		}
		else {
			printf("NO\n");

		}

	}
	return 0;
}
/*
6
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(

*/