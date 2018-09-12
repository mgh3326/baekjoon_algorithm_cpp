
#include <stdio.h> 

int main(void) {
	int num = 0;
	scanf("%d", &num);
	char str[80];
	int index;
	int weight;
	int score;
	for (int i = 0; i < num + 1; i++)//처음에 엔터값 들어와서 그런가
	{

		gets(str);
		if (str[0] == 0)
			continue;
		index = 0;
		weight = 0;
		score = 0;
		while (1) {
			if (str[index] == 0)
				break;
			if (str[index] == 79)
			{
				/*	printf("O나왔네\n");*/
				weight++;
				score += weight;
			}
			else if (str[index] == 88)
			{
				/*printf("X나왔네\n");*/
				weight = 0;
			}
			index++;
		}
		printf("%d\n", score);

		/*printf("1233");*/
	}
	/*printf("%d\n", answer);*/
	/*return 0;*/
}