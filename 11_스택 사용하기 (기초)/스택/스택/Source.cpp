#include<iostream>
#include<string>
#include <vector>
#include <stack>
using namespace std;

int main(void) {

	// 200����Ʈ�� ���ڿ��� ����Ǵ� �迭
	// �迭�� ���� �˸��� NULL ���� 1���� ������ �ʿ��ϱ⿡ 200 + 1 = 201

	int num;
	scanf("%d", &num);
	stack<int> st;  // default �� deque �����̳� ���
	//stack<int, vector<int>> st;  vector �����̳ʸ� �̿��Ͽ� stack �����̳� ����


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
			st.push(myNr);    // ���ÿ� ���
		}
		else if (str[0] == 'p')//pop
		{
			if (st.empty())                // ������ ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", st.top());
				st.pop();

			}
		}

		else if (str[0] == 's')//size
		{
			printf("%d\n", st.size());
		}
		else if (str[0] == 'e')//empty
		{
			if (st.empty())                // ������ ������� Ȯ��
				printf("1\n");
			else {
				printf("0\n");
			}
		}
		else if (str[0] == 't')//top
		{
			if (st.empty())                // ������ ������� Ȯ��
				printf("-1\n");
			else {
				printf("%d\n", st.top());
			}
		}
	}
	return 0;
}
/*

14
push 1
push 2
top
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
top

*/
