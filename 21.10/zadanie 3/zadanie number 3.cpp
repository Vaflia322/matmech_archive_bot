#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	cout << pow(1 - tan(x), 1 / tan(x)) + cos(x - y);
	return 0;
}