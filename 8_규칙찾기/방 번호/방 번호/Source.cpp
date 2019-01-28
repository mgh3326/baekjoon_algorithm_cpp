#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(void) {
	//int num = 0;
	//scanf("%d", &num);//int input
	char arr[7];
	char numbers[9] = { 0, };//9는 6으로 대신함
	scanf("%s", arr);
	int index = 0;
	int answer = 0;
	while (arr[index] != '\0')
	{
		/*printf("%c\n", arr[index]);*/
		if (arr[index] == '9')
		{
			numbers[6]++;
		}
		else {
			numbers[arr[index] - 48]++;

		}
		index++;
	}
	double temp = (double)numbers[6] / 2;
	numbers[6] = ceil(temp);//이제 맥스값을 찾자
	for (int i = 0; i < 9; i++)
	{
		if (answer < numbers[i])
			answer = numbers[i];
	}
	printf("%d\n", answer);
	return 0;
}