#include <iostream>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	char str[81];
	int index;
	int weight;
	int score;
	for (int i = 0; i < num; i++)//ó���� ���Ͱ� ���ͼ� �׷���
	{
		scanf("%s", str);

		index = 0;
		weight = 0;
		score = 0;
		while (1) {
			if (str[index] == 0)
				break;
			else if (str[index] == 79)
			{
				weight++;
				score += weight;
			}
			else if (str[index] == 88)
			{
				weight = 0;
			}
			index++;
		}
		printf("%d\n", score);
	}
}