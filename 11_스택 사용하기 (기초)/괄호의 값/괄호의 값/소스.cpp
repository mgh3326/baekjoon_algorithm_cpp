#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void) {
		string str;
		cin >> str;

		stack<char> s;
		bool result = true;
		int total = 0;
		int temp = 0;
		int sum = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
			{
				s.push('(');
			}
			else if (str[j] == '[')
			{
				s.push('[');
			}
			
			else //´Ý´Â °ýÈ£ µîÀå
			{
				if (s.empty() != true)
				{
					if (str[j] == ']')
					{
						if (s.top() != '[')
						{
							result = false;
							break;
						}
						temp = 3;
					}
					else // if (str[j] == ')')
					{
						if (s.top() != '(')
						{
							result = false;
							break;
						}
						temp = 2;

					}
					s.pop();
					if (s.empty() == true)
					{
						if (sum == 0)
						{
							sum = temp;
						}
						else {
							sum *= temp;
						}
						total += sum;
						sum = 0;
					}
					else
					{
						if (sum == 0)
						{
							sum = temp;
						}
						else {
							sum *= temp;
						}
					}
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
			printf("%d\n",total);
		}
		else {
			printf("0\n");

		}

	return 0;
}
/*
(()[[]])([])

*/