#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a % 4 == 1) {
		a = a+3;
	}
	if (a % 4 == 2) {
		a = a+2;
	}
	if (a % 4 == 3) {
		a = a+1;
	}
	if (b % 4 == 1) {
		b = b - 1;
	}
	if (b % 4 == 2) {
		b = b - 2;
	}
	if (b % 4 == 3) {
		b = b - 3;
	}
	cout << ((b-a)/4-(b-a)/100+(b-a)/400+1);
	
}