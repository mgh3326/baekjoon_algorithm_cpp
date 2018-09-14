#include<stdio.h>
int main(void) {
	int number = 0;
	scanf("%d", &number);
	char str[21];
	int index;
	for (int i = 0; i < number; i++) {
		scanf("%s", str);
		index = 0;
		while (true) {
			if (str[index] == 0)
				break;

			printf("%c", str[index]);

			index++;
		}
		printf("\n");
	}
}