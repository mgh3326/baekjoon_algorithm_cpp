#include<iostream>
#include <stdio.h>
#include <algorithm>    // std::max

using namespace std;
int main(void) {
	char input[1000001];
	scanf("%s", &input);
	int index = 0;
	int alpha[26];
	for (int i = 0; i < 26; i++) {//�ʱ�ȭ�� �ʿ���!
		alpha[i] = 0;
	}
	while (true)
	{
		if (input[index] == 0)
			break;
		/*printf("%c\n", input[index]);
		*/
		if (input[index] < 91)//�빮���϶�
		{
			alpha[input[index] - 65]++;
		}
		else {//�ҹ����϶�
			alpha[input[index] - 97]++;
		}

		index++;
	}
	int max = 0;
	char maxchar;
	for (int i = 0; i < 26; i++)
		if (max < alpha[i])
		{
			max = alpha[i];
			maxchar = i + 65;
		}
		else if (max == alpha[i])
		{
			maxchar = '?';

		}
	printf("%c\n", maxchar);

	//�Ʒ� ���� ���� �Ѱǵ� �޸𸮴� �Ȱ��� ����
	/*int max = *max_element(alpha, alpha + 26);
	int max_count = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == max)
		{
			max_count++;
			if (max_count == 2)
			{
				printf("?\n");
				return 0;
			}
		}

	}
	printf("%c", distance(alpha, max_element(alpha, alpha + 26)) + 65);*/
	return 0;
}
//��� �ҹ��ڷ� �̷�� ���ִ�.
//