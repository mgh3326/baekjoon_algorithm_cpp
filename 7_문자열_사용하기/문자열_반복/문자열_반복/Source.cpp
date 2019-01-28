#include<stdio.h>
int main(void) {
	int number = 0;
	scanf("%d", &number);
	char str[21];
	int index;
	int count = 0;
	for (int i = 0; i < number; i++) {
		scanf("%d", &count);
		scanf("%s", str);
		index = 0;
		while (true) {
			if (str[index] == 0)
				break;
			for (int j = 0; j < count; j++)
			{
				printf("%c", str[index]);
			}

			index++;
		}
		printf("\n");
	}
}