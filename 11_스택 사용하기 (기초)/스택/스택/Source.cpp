#include<iostream>
#include<string>
#include <vector>
#include <stack>
using namespace std;

int main(void) {

	// 200바이트의 문자열이 저장되는 배열
	// 배열의 끝을 알리는 NULL 문자 1개의 공간이 필요하기에 200 + 1 = 201

	int num;
	scanf("%d", &num);
	stack<int> st;  // default 는 deque 컨테이너 사용
	//stack<int, vector<int>> st;  vector 컨테이너를 이용하여 stack 컨테이너 생성


	for (int i = 0; i < num; i++)
	{
		string str = "";
		getline(cin, str);
		if (str == "")//처음에 이렇게 해주어야하는건가 싶다.
		{
			getline(cin, str);
		}
		if (str.length() > 5 && str[4] == 32)//&&연산이 있을때 앞에꺼를 먼저 보고 안되면 뒤에껄 안봐버리네 신기 방기
		{//이걸 push 라고 봐도 무방하겠다.
			string numberString = str.substr(5, str.length());
			int myNr = std::stoi(numberString);
			st.push(myNr);    // 스택에 등록
		}
		else if (str[0] == 'p')//pop
		{
			if (st.empty())                // 스택이 비었는지 확인
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
			if (st.empty())                // 스택이 비었는지 확인
				printf("1\n");
			else {
				printf("0\n");
			}
		}
		else if (str[0] == 't')//top
		{
			if (st.empty())                // 스택이 비었는지 확인
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
