#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(void)
{
	string str;
	int result = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		set<string> s;
		for (int j = 0; j < str.length() - i; j++)
		{
			s.insert(str.substr(j, i + 1));
		}
		result += s.size();
	}
	cout << result;
	printf("\n");
	return 0;
}

/*
ababc

*/