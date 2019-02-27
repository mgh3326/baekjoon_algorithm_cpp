#include<iostream>
#include<string>
using namespace std;
int Subtotal(int  input)
{
	std::string str = std::to_string(input);

	int result = 0;
	for (int i = 0; i < str.length(); i++)
	{
		result += (int)(str[i] - '0');
	}
	return result;
}
int main(void)
{

	int input = 0;
	std::cin >> input;
	int result = 0;
	for (int i = input-1; i >= 0; i--)
	{
		
		if (i == Subtotal(input - i))
		{
			result= input - i;
			break;
		}
		

	}
	cout << result;
	printf("\n");
	return 0;
}