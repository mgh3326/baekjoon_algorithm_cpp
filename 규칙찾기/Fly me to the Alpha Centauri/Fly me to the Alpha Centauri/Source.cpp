#include<stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		int diff = y - x;
		int answer = 0;
		int last = 1;//���������� ������ ����

		if (diff < 4)
		{
			answer = diff;
		}
		else if (diff == 4)
		{
			answer = 3;
		}
		else if (diff <= 9)
		{
			answer = 4;
		}
		else {
			unsigned int num1 = 4;
			unsigned int num2 = 6;//2147483647 �϶� �� ���� 1���̰� ����
			answer = 5;
			int temp = 2;
			while (true) {

				if (answer % 2 == 1)//i�� ¦���϶�
				{
					num1 += (temp) * 2 + 1;//�̷��� �ϸ� int ���� �Ѿ�°� ����.
					if (diff <= num1)
					{
						break;
					}
					temp++;


				}
				else {
					num2 += temp*2;
					if (diff <= num2)
					{
						break;
					}
				}
				answer++;
				
			}

		}
		printf("%d\n", answer);

	}

}


