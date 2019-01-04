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


	/*int first_index = -1;
	vector<int> vec;*/
	while (true) {
		scanf("%d", &n);
		if (n == 0)
			break;

		else {
			int answer = 0;

			for (int i = n+1; i < 2 * n + 1; i++)
			{

				if (is_odd(i) == 0) {//소수 라면
					/*vec.push_back(i);*/
					/*printf("%d\n", i);*/
					answer++;
				}
			}
			printf("%d\n", answer);

		}

	}



	return 0;
}