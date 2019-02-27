#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	queue<int> que;
	for (int i = 0; i < n; i++)
	{
		que.push(i + 1);
	}
	printf("<");
	while (true)
	{

		int front = 0;

		for (int i = 0; i < m - 1; i++)
		{
			front = que.front();
			que.push(front);
			que.pop();
		}
		front = que.front();
		que.pop();
		if (que.empty() == true)
		{
			printf("%d", front);
			break;

		}
		else
		{
			printf("%d, ", front);

		}


	}
	printf(">");

	return 0;
}