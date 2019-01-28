#include<stdio.h>
int main(void) {
	int number = 0;
	scanf("%d", &number);
	char str[101];//최대 길이가 100개 이므로
	int index;
	int alpha[26];//소문자로만 되어있다.
	int answer = 0;
	for (int i = 0; i < number; i++) {
		for (int i = 0; i < 26; i++) {//초기화가 필요함!
			alpha[i] = -1;
		}
		scanf("%s", str);
		index = 0;
		while (true) {
			if (str[index] == 0)
				break;
			if (str[index] != str[index - 1])
			{
				if (alpha[str[index] - 97] == -1)
				{
					alpha[str[index] - 97] = 0;//이렇게 해서 표시를 할수 있도록 해야겠다.
				}
				else {
					index++;
					answer--;//이렇게 하면 별로 안좋을거 같다. 나중에는 바꿔야겠다.
					break;
				}
			}


			index++;
		}
		answer++;
	}
	printf("%d\n", answer);
	return 0;
}
//