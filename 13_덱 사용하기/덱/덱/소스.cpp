#include<iostream>
#include<string>
#include <vector>
#include <deque>
using namespace std;

int main(void) {

	// 200바이트의 문자열이 저장되는 배열
	// 배열의 끝을 알리는 NULL 문자 1개의 공간이 필요하기에 200 + 1 = 201

	int num;
	scanf("%d", &num);
	deque<int> dq;  // default 는 deque 컨테이너 사용
	//queue<int, vector<int>> dq;  vector 컨테이너를 이용하여 queue 컨테이너 생성
	for (int i = 0; i < num; i++)
	{
		string str = "";
		getline(cin, str);
		if (str == "")//처음에 이렇게 해주어야하는건가 싶다.
		{
			getline(cin, str);
		}
		//push_front, push_back 이 2개 구별해야되네
		//push_front 1
		if (str.length() > 10)//&&연산이 있을때 앞에꺼를 먼저 보고 안되면 뒤에껄 안봐버리네 신기 방기
		{//이걸 push 라고 봐도 무방하겠다.
			if (str[10] == 32)
			{
				string numberString = str.substr(11, str.length());
				int myNr = std::stoi(numberString);
				dq.push_front(myNr);    // 큐에 등록
			}
			else //str[10]==32
			{
				string numberString = str.substr(10, str.length());
				int myNr = std::stoi(numberString);
				dq.push_back(myNr);    // 큐에 등록
			}

		}
		else if (str[0] == 'p')//pop
		{
			if (dq.empty())                // 큐가 비었는지 확인
				printf("-1\n");
			else {
				if (str.length() == 9)
				{
					printf("%d\n", dq.front());
					dq.pop_front();//이거 2개 구별해야되네
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
			if (dq.empty())                // 큐가 비었는지 확인
				printf("1\n");
			else {
				printf("0\n");
			}
		}
		else if (str[0] == 'f')//front
		{
			if (dq.empty())                // 큐가 비었는지 확인
				printf("-1\n");
			else {
				printf("%d\n", dq.front());
			}
		}
		else if (str[0] == 'b')//back
		{
			if (dq.empty())                // 큐가 비었는지 확인
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
