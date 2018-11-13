#include<iostream>
void star(int n, int x, int y);

using namespace std;

char arr[3072][6144];

int main(void)
{
	int n, i, j;

	scanf("%d", &n);
	//�迭 �ʱ�ȭ
	//�� ������ ���� ��ҵ��� ��������, ���� ���κи� null�� �ʱ�ȭ�Ѵ�.
	for (i = 0; i < n; i++) {
		for (j = 0; j < 2 * n; j++) {
			if (j == 2 * n - 1)
				arr[i][j] = '\0';
			else
				arr[i][j] = ' ';
		}
	}

	star(n, n - 1, 0);//�ﰢ���� ���̿�, �ﰢ�� �� �� ������ ��ǥ�� �Ű������� �ѱ��.

	//�ﰢ�� ���
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2 * n - 1; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void star(int n, int x, int y)
{
	if (n == 3)//���̰� 3�̶�� ���� ����� ����Ѵ�.
	{
		//���� �׸���.
		arr[y][x] = '*';
		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';
		return;
	}
	star(n / 2, x, y); // ���� �ﰢ�� ���̿� �� �� ����� ��ǥ�� ������. 
	star(n / 2, x - (n / 2), y + (n / 2)); // ���� �ϴ� �ﰢ�� ���̿� �� �� ����� ��ǥ�� ������.
	star(n / 2, x + (n / 2), y + (n / 2)); // ������ �ϴ� �ﰢ�� ���̿� �� �� ����� ��ǥ�� ������.
}