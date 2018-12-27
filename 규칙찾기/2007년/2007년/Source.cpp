#include<iostream>
using namespace std;
int main(void) {
	int x = 0, y = 0;
	cin >> x >> y;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int answer = 0;
	for (int i = 0; i < x - 1; i++)
	{
		answer += month[i];
	}
	switch ((answer + y) % 7)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	default:
		break;
	}
	cout << "\n";
	return 0;
}