#include<iostream>
using namespace std;
int main(void) {
	int temp = 0;
	int input = 0;
	scanf("%d", &input);
	temp = input;
	if (input == 1) {
		for (int i = 1; i < 8; i++) {
			scanf("%d", &input);
			if (input - temp != 1) {
				printf("mixed\n");
				return 0;
			}
			temp = input;
		}
		printf("ascending\n");
	}
	else if (input == 8) {
		for (int i = 1; i < 8; i++) {
			scanf("%d", &input);
			if (input - temp != -1) {
				printf("mixed\n");
				return 0;
			}
			temp = input;
		}
		printf("descending\n");
	}
	else {
		printf("mixed\n");
		return 0;
	}
	return 0;
}