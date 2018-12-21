#include<stdio.h>
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int index = 1;
	int temp = 0;
	int diff = 0;
	while (true) {
		temp = index * (index + 1) / 2;
		//temp += 6 * index - 5;
		if (temp >= num) {
			diff = temp - num + 1;
			index++;
			break;

		}
		index++;
	}
	if (index % 2 == 0)//양수라면
	{
		printf("%d/%d\n", diff, index - diff);


	}
	else//홀수라면
	{
		printf("%d/%d\n", index - diff, diff);

	}

}
