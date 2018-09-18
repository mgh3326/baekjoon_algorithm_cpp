#include<stdio.h>
int main(void) {
	char str1[4];
	char str2[4];
	scanf("%s", str1);
	scanf("%s", str2);//입력 받고
	if ((str1[2] - '0') * 100 + (str1[1] - '0') * 10 + (str1[0] - '0') - ((str2[2] - '0') * 100 + (str2[1] - '0') * 10 + (str2[0] - '0')) >= 0) {
		printf("%c%c%c\n", str1[2], str1[1], str1[0]);//거꾸로 입력 받아서 빼보고 크면 이거
	}
	else {
		printf("%c%c%c\n", str2[2], str2[1], str2[0]);//아니면 이거
	}

	return 0;
}