#include<stdio.h>
int main(void) {
	int number = 0;
	scanf("%d", &number);
	char str[101];//�ִ� ���̰� 100�� �̹Ƿ�
	int index;
	int alpha[26];//�ҹ��ڷθ� �Ǿ��ִ�.
	int answer = 0;
	for (int i = 0; i < number; i++) {
		for (int i = 0; i < 26; i++) {//�ʱ�ȭ�� �ʿ���!
			alpha[i] = -1;
		}
		scanf("%s", str);
		index = 0;
		while (true) {
			if (str[index] == 0)
				break;
			if (str[index] != str[index - 1])
			{
				if (alpha[str[index] - 97] == -1)
				{
					alpha[str[index] - 97] = 0;//�̷��� �ؼ� ǥ�ø� �Ҽ� �ֵ��� �ؾ߰ڴ�.
				}
				else {
					index++;
					answer--;//�̷��� �ϸ� ���� �������� ����. ���߿��� �ٲ�߰ڴ�.
					break;
				}
			}


			index++;
		}
		answer++;
	}
	printf("%d\n", answer);
	return 0;
}
//