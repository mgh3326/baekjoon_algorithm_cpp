#include<iostream>

using namespace std;

int main(void) {
	int answer = 1;
	char name[1000004];
	std::cin.getline(name, 1000004);
	int index = 0;
	if (name[0] == '\0' || name[1] == '\0') {
		answer = 0;
	}
	if (name[0] == ' ') {
		answer = 0;
	}
	while (1) {
		if (name[index] == '\0')
			break;
		if (name[index] == ' ') {
			if (name[index + 1] == '\0')
				break;
			answer++;
		}
		index++;
	}
	printf("%d\n", answer);
}