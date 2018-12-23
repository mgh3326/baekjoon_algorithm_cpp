#include<stdio.h>

int main(void) {
	int num = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		int diff = y - x;
		int answer = 0;
		int last = 1;//마지막으로 움직인 숫자

		if (diff < 4)
		{
			answer = diff;
		}
		else if (diff == 4)
		{
			answer = 3;
		}
		else if (diff <= 9)
		{
			answer = 4;
		}
		else {
			unsigned int num1 = 4;
			unsigned int num2 = 6;//2147483647 일때 왜 값이 1차이가 날까
			answer = 5;
			int temp = 2;
			while (true) {

				if (answer % 2 == 1)//i가 짝수일때
				{
					num1 += (temp) * 2 + 1;//이렇게 하면 int 범위 넘어가는거 같다.
					if (diff <= num1)
					{
						break;
					}
					temp++;


				}
				else {
					num2 += temp*2;
					if (diff <= num2)
					{
						break;
					}
				}
				answer++;
				
			}

		}
		printf("%d\n", answer);

	}

}


