#include<iostream>
#include<deque>
using namespace std;
int min_deque(deque<int> dq)
{
	int min = dq[0];
	for (int i = 1; i < dq.size(); i++)
	{
		if (min > dq[i])
		{
			min = dq[i];
		}
	}
	return min;
}
int main(void)
{
	int num = 0, length = 0;
	cin >> num >> length;
	deque<int> q;

	for (int i = 0; i < num; i++)
	{
		int temp = 0;
		cin >> temp;
		q.push_back(temp);
		
		if (q.size() == 4)
		{
			q.pop_front();
		}
		cout << min_deque(q) << " ";
	}
	printf("\n");
}
/*
12 3
1 5 2 3 6 2 3 7 3 5 2 6

*/