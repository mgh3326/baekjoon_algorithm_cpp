#include<stdio.h>
int main(void) {
	char str[101];
	scanf("%s", str);
	int index = 0;
	int count = 0;
	while (true) {
		if (str[index] == 0)
			break;
		if (str[index] == '=') {
			if (str[index - 1] == 'c') {//c=

			}
			else if (str[index - 1] == 'z') {
				if (str[index - 2] == 'd') {//dz=

				}
				else {//z=

				}
			}
		}
		else if (str[index] == '-') {

		}
		else if (str[index] == 'j') {

		}
		else {
			count++;
		}
	}
}