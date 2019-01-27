#include<iostream>
#include<string>
#include <vector>
#include <queue>
using namespace std;

int main(void) {

	// 200바이트의 문자열이 저장되는 배열
	// 배열의 끝을 알리는 NULL 문자 1개의 공간이 필요하기에 200 + 1 = 201

	int num;
	scanf("%d", &num);
	queue<int> que;  // default 는 deque 컨테이너 사용
	//queue<int, vector<int>> que;  vector 컨테이너를 이용하여 queue 컨테이너 생성


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
			que.push(myNr);    // 큐에 등록
		}
		else if (str[0] == 'p')//pop
		{
			if (que.empty())                // 큐가 비었는지 확인
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
			if (que.empty())                // 큐가 비었는지 확인
				printf("1\n");
			else {
				printf("0\n");
			}
		}
		else if (str[0] == 'f')//front
		{
			if (que.empty())                // 큐가 비었는지 확인
				printf("-1\n");
			else {
				printf("%d\n", que.front());
			}
		}
		else if (str[0] == 'b')//back
		{
			if (que.empty())                // 큐가 비었는지 확인
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
