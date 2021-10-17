#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int m;
	stringstream ss;
	cin >> m;
	while (m > 0) {
		ss << m % 10;
		m = m / 10;
	}
	ss >> m;
	cout << m;
	return 0;
}