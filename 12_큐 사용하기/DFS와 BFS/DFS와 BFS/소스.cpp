#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;


// stack�� ���� �湮�Ѱŷ� �Ǵ�
// �ش� ��ġ�� true�� ���ش�.
void dfs(int start, vector<int> graph[], int size) {
	bool  *check = new bool[size + 1];
	for (int i = 0; i < size + 1; ++i)
		check[i] = false;
	stack<int> s;
	s.push(start);
	check[start] = true;
	printf("%d ", start);

	while (!s.empty()) {

		int current_node = s.top();
		s.pop();
		for (int i = 0; i < graph[current_node].size(); i++) {

			int next_node = graph[current_node][i];

			if (check[next_node] == false) {
				printf("%d ", next_node);
				check[next_node] = true;
				// pop()�� �߾��� ������ ���� current_node�� �־�����Ѵ�.
				s.push(current_node);
				s.push(next_node);
				break;
			}
		}
	}

}
void bfs(int start, vector<int> graph[], int size) {
	bool  *check = new bool[size + 1];
	for (int i = 0; i < size + 1; ++i)
		check[i] = false;
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		printf("%d ", tmp);
		for (int i = 0; i < graph[tmp].size(); i++) {

			// �湮���� �ʾҴٸ�
			if (check[graph[tmp][i]] == false) {
				// ť�� �־��ְ� �湮������ ǥ���Ѵ�.
				q.push(graph[tmp][i]);
				check[graph[tmp][i]] = true;
			}
		}
	}

}
int main(void) {
	int n = 0, m = 0, start = 0;
	scanf("%d %d %d", &n, &m, &start);
	vector<int> *graph = new vector<int>[n + 1];

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// Sorting�� �� �Ѱ���?
	// ���߿� �ϳ��� �������� ������ Ž���� �� node ���� ���������� �����ؾ��ϱ� ����
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	//dfs

	dfs(start, graph, n + 1);
	printf("\n");
	//bfs
	bfs(start, graph, n + 1);
	printf("\n");
	return 0;
}

/*
4 5 1
1 2
1 3
1 4
2 4
3 4

*/