#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;


// stack에 들어가면 방문한거로 판단
// 해당 위치를 true로 해준다.
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
				// pop()을 했었기 때문에 현재 current_node도 넣어줘야한다.
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

			// 방문하지 않았다면
			if (check[graph[tmp][i]] == false) {
				// 큐에 넣어주고 방문했음을 표시한다.
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

	// Sorting은 왜 한거지?
	// 나중에 하나의 정점에서 다음을 탐색할 때 node 값에 순차적으로 접근해야하기 때문
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