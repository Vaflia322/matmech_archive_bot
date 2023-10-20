#include <iostream>
#include <math.h>

using namespace std;
int main() {
	double x, n, y, golosapo1;
	cin >> x >> y >> n;
	x = (round(x * 10)) / 10;
	y = (round(y * 10)) / 10;
	golosapo1 = (n * x - y * n) / (y - 1);
	cout << ceil(golosapo1);
}