#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string str;
	cin >> str;
	std::string delimiter = "-";

	size_t pos = 0;
	std::string token;
	while ((pos = str.find(delimiter)) != std::string::npos) {
		token = str.substr(0, pos);
		std::cout << token[0];
		str.erase(0, pos + delimiter.length());
	}
	std::cout << str[0];
	printf("\n");
	return 0;
}
/*
Knuth-Morris-Pratt

*/