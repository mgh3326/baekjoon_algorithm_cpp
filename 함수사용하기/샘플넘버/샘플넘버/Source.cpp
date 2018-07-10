#include<iostream>
using namespace std;
int GetSelfNumber(int input) {
	if (input < 10) {
		return input + input;
	}
	else if (input < 100) {
		return input + input / 10 + input % 10;
	}
	else if (input < 1000) {
		return input + (input / 10) / 10 + (input / 10) % 10 + input % 10;
	}
	else {
		return input + (input / 100) / 10 + (input / 100) % 10 + input / 10 % 10 + input % 10;
	}

}
int main(void)
{
	int arr[10005];
	for (int i = 1; i < 10000; i++)
	{
		//arr[i] = 0;
		int temp = GetSelfNumber(i);
		if (temp >= 10000)
		{
			continue;
		}
		if (arr[temp] != 1)
		{
			arr[temp] = 1;
		}

	}
	for (int i = 1; i < 10000; i++)
	{
		if (arr[i] != 1)
			printf("%d\n", i);
	}


}