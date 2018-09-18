#include<stdio.h>
int main(void) {
	char str[16];
	scanf("%s", str);
	int index = 0;
	int answer = 0;
	while (true)
	{
		if (str[index] == 0)
			break;
		if (str[index] < 'S') {
			answer += (str[index] - 'A') / 3 + 3;//그림 모양이 다르넹
			/*printf("%c	%d\n", str[index], (str[index] - 'A') / 3 + 2);*/
		}
		else {
			if (str[index] - 'V' > 0) {
				answer += 10;
				/*printf("%c %d\n", str[index], 9);*/
			}
			else if (str[index] - 'V' == -3) {//S
				answer += 8;
				/*printf("%c	%d\n", str[index], 7);*/

			}
			else {
				answer += 9;
				/*printf("%c	%d\n", str[index], 8);*/
			}

		}
		index++;
	}
	printf("%d\n", answer);
	return 0;
}
// 2 3 4 5 6 7 8 9
// 3 3 3 3 3 4 3 4