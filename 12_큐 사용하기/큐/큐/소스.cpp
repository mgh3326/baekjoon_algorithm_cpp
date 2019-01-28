#include<iostream>
#include<string>
#include <vector>
#include <queue>
using namespace std;

int main(void) {

	// 200����Ʈ�� ���ڿ��� ����Ǵ� �迭
	// �迭�� ���� �˸��� NULL ���� 1���� ������ �ʿ��ϱ⿡ 200 + 1 = 201

	int num;
	scanf("%d", &num);
	queue<int> que;  // default �� deque �����̳� ���
	//queue<int, vector<int>> que;  vector �����̳ʸ� �̿��Ͽ� queue �����̳� ����


	for (int i = 0; i < num; i++)
	{
		string str = "";
		getline(cin, str);
		if (str == "")//ó���� �̷��� ���־���ϴ°ǰ� �ʹ�.
		{
			getline(cin, str);
		}
		if (str.length() > 5 && str[4] == 32)//&&������ ������ �տ����� ���� ���� �ȵǸ� �ڿ��� �Ⱥ������� �ű� ���
		{//�̰� push ��� ���� �����ϰڴ�.
			string numberString = str.substr(5, str.length());
			int myNr = std::stoi(numberString);
			que.push(myNr);    // ť�� ���
		}
		else if (str[0] == 'p')//pop
		{
			if (que.empty())                // ť�� ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", que.front());
				que.pop();

			}
		}

		else if (str[0] == 's')//size
		{
			printf("%d\n", que.size());
		}
		else if (str[0] == 'e')//empty
		{
			if (que.empty())                // ť�� ������� Ȯ��
				printf("1\n");
			else {
				printf("0\n");
			}
		}
		else if (str[0] == 'f')//front
		{
			if (que.empty())                // ť�� ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", que.front());
			}
		}
		else if (str[0] == 'b')//back
		{
			if (que.empty())                // ť�� ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", que.back());
			}
		}
	}
	return 0;
}
/*

15
push 1
push 2
front
back
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
front

*/
