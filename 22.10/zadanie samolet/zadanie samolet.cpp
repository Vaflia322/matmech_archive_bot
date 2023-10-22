#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double h, t, v, x;
	cin >> h >> t >> v >> x;
	double mint, maxt;
	double t1, t2, h1, h2;
	if (h / x <= t) {
		mint = 0;
	}
	else {
		t1 = t, t2 = 0;
		h1 = t1 * x, h2 = t2 * v;
		while (h1 + h2 < h) {
			t1 -= 1, t2 += 1;
			h1 = t1 * x, h2 = t2 * v;
		}
		mint = t2;
		t1 = 0, t2 = t;
		h1 = t1 * x, h2 = t2 * v;
		while (h1 + h2 < h) {
			t1 += 1, t2 -= 1;
			h1 = t1 * x, h2 = t2 * v;
		}
		maxt = t2;
	}
	cout << mint <<' '<<maxt;
}
