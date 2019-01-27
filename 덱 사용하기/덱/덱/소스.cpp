#include<iostream>
#include<string>
#include <vector>
#include <deque>
using namespace std;

int main(void) {

	// 200����Ʈ�� ���ڿ��� ����Ǵ� �迭
	// �迭�� ���� �˸��� NULL ���� 1���� ������ �ʿ��ϱ⿡ 200 + 1 = 201

	int num;
	scanf("%d", &num);
	deque<int> dq;  // default �� deque �����̳� ���
	//queue<int, vector<int>> dq;  vector �����̳ʸ� �̿��Ͽ� queue �����̳� ����
	for (int i = 0; i < num; i++)
	{
		string str = "";
		getline(cin, str);
		if (str == "")//ó���� �̷��� ���־���ϴ°ǰ� �ʹ�.
		{
			getline(cin, str);
		}
		//push_front, push_back �� 2�� �����ؾߵǳ�
		//push_front 1
		if (str.length() > 10)//&&������ ������ �տ����� ���� ���� �ȵǸ� �ڿ��� �Ⱥ������� �ű� ���
		{//�̰� push ��� ���� �����ϰڴ�.
			if (str[10] == 32)
			{
				string numberString = str.substr(11, str.length());
				int myNr = std::stoi(numberString);
				dq.push_front(myNr);    // ť�� ���
			}
			else //str[10]==32
			{
				string numberString = str.substr(10, str.length());
				int myNr = std::stoi(numberString);
				dq.push_back(myNr);    // ť�� ���
			}

		}
		else if (str[0] == 'p')//pop
		{
			if (dq.empty())                // ť�� ������� Ȯ��
				printf("-1\n");
			else {
				if (str.length() == 9)
				{
					printf("%d\n", dq.front());
					dq.pop_front();//�̰� 2�� �����ؾߵǳ�
				}
				else {
					printf("%d\n", dq.back());
					dq.pop_back();
				}
			}
		}

		else if (str[0] == 's')//size
		{
			printf("%d\n", dq.size());
		}
		else if (str[0] == 'e')//empty
		{
			if (dq.empty())                // ť�� ������� Ȯ��
				printf("1\n");
			else {
				printf("0\n");
			}
		}
		else if (str[0] == 'f')//front
		{
			if (dq.empty())                // ť�� ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", dq.front());
			}
		}
		else if (str[0] == 'b')//back
		{
			if (dq.empty())                // ť�� ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", dq.back());
			}
		}
	}
	return 0;
}
/*

15
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
empty
front

*/

/*

22
front
back
pop_front
pop_back
push_front 1
front
pop_back
push_back 2
back
pop_front
push_front 10
push_front 333
front
back
pop_back
pop_back
push_back 20
push_back 1234
front
back
pop_back
pop_back

*/
