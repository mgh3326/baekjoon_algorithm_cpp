#include<iostream>
#include<vector>
#include<math.h>

using namespace std;
int is_odd(int num) {
	int root = sqrt(num);
	for (int i = 2; i <= root; i++)
	{
		if (num%i == 0)//소수가 아니다.
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int n = 0;
	int m = 0;
	int answer = 0;

	int first_index = -1;
	vector<int> vec;

	scanf("%d", &m);
	scanf("%d", &n);
	for (int i = 2; i < n + 1; i++)
	{
		if (first_index == -1)
		{
			if (i >= m)
			{
				first_index = vec.size();
			}
		}
		if (is_odd(i) == 0) {//소수 라면
			vec.push_back(i);
		}
	

		/*printf("%d\n",  i);*/
	}
	for (int i = first_index; i < vec.size(); i++)
	{
		answer += vec[i];
	}
	if (answer != 0)
	{
		printf("%d\n", answer);
		printf("%d\n", vec[first_index]);
	}
	else {
		answer = -1;
		printf("%d\n", answer);

	}

	return 0;
}