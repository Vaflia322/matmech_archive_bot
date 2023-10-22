#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
	double h, r, a, s;
	cin >> h >> r;
	h = h / 2;

	if (r <= h) {
		s = M_PI * pow(r, 2);
	}

	if (r >= h * sqrt(2)) {
		s = h * h * 4;
	}

	if (r > h and r < h * sqrt(2)) {
		a = 2 * acos(h / r);
		s = M_PI * pow(r, 2) - 4 * (a - sin(a)) * pow(r, 2) / 2;
	}
	cout << fixed << s;
}