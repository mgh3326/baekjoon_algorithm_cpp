#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	int test_case = 0;
	scanf("%d", &test_case);

	for (int i = 0; i < test_case; i++)
	{
		int num = 0;
		int find_index = 0;
		queue<int> que;
		scanf("%d %d", &num, &find_index);
		for (int j = 0; j < num; j++)
		{
			int temp = 0;
			scanf("%d", &temp);
			que.push(temp);
		}
		printf("");
	}
	return 0;
}

/*
3
1 0
5
4 2
1 2 3 4
6 0
1 1 9 1 1 1

*/