#include<iostream>
#include<stack>
using namespace std;
int main(void) {
	int num;
	scanf("%d",&num);
	stack<int> s;
	int *arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
		s.push(i + 1);

	}
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
		s.push(i + 1);

	}
	return 0;
}