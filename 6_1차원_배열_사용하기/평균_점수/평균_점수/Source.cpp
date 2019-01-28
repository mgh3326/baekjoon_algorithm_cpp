#include<iostream>
using namespace std;
int main(void) {
	int answer = 0;
	int input = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &input);
		if (input < 40) {
			answer += 40;
		}
		else {
			answer += input;
		}
	}
	printf("%d\n", answer / 5);
	return 0;
}