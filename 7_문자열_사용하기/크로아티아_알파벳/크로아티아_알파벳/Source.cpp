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
				count -= 1;
			}
			else if (str[index - 1] == 'z') {
				if (str[index - 2] == 'd') {//dz=
					count -= 2;
				}
				else {//z=
					count -= 1;
				}
			}
			else if (str[index - 1] == 's') {//s=
				count -= 1;
			}
		}
		else if (str[index] == '-') {
			if (str[index - 1] == 'c') {//c-
				count -= 1;
			}
			else if (str[index - 1] == 'd') {//d-
				count -= 1;
			}
		}
		else if (str[index] == 'j') {
			if (str[index - 1] == 'l') {//lj
				count -= 1;
			}
			else if (str[index - 1] == 'n') {//nj
				count -= 1;
			}
		}
		/*else {
			count++;
		}*/
		index++;
		count++;
	}
	printf("%d\n", count);
}