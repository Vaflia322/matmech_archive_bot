#include <iostream>

using namespace std;

int main() {
	int count, c1, c2, c4, c5;
	cin >> count;
	c1 = count / 10000;
	c2 = (count / 1000) % 10;
	c5 = count % 10;
	c4 = (count % 100) / 10;
	if (c1 == c5 and c2 == c4) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}