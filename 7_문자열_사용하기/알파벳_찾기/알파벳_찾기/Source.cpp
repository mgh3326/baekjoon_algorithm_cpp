#include<iostream>
#include <stdio.h>
using namespace std;
int main(void) {
	char input[101];
	scanf("%s", &input);
	int index = 0;
	int alpha[26];
	for (int i = 0; i < 26; i++) {//초기화가 필요함!
		alpha[i] = -1;
	}
	while (true)
	{
		if (input[index] == 0)
			break;
		/*printf("%c\n", input[index]);
		*/
		if (alpha[input[index] - 97] == -1)
		{
			alpha[input[index] - 97] = index;
		}


		index++;
	}

	for (int i = 0; i < 26; i++) {

		printf("%d ", alpha[i]);

	}


	return 0;
}
//모두 소문자로 이루어 져있다.
//