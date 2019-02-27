#include<iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	std::string delimiter = "&&";
	std::string delimiter_equal = "==";

	size_t pos = 0;
	std::size_t temp = 0;
	std::string token;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		token = s.substr(0, pos);
		if ((temp = s.find(delimiter_equal)) != std::string::npos)//temp에 index가 담기네
		{

		}
		else {

		}
		std::cout << token << std::endl;
		s.erase(0, pos + delimiter.length());
	}
	if((temp = s.find(delimiter_equal)) != std::string::npos)//temp에 index가 담기네
	{

	}
	else {

	}
	std::cout << s << std::endl;


}

/*
festival==kakao&&festival==2018&&haha==123456&&hoho!=123456


*/