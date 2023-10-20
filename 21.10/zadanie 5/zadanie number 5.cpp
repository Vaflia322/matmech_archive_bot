#include <iostream>

using namespace std;

int main(){
	double x, y;
	cin >> x >> y;
	if (x > 0 and y > 0) {
		cout << "1 chetvert";
	}
	if (x < 0 and y > 0) {
		cout << "2 chetvert";
	}
	if (x < 0 and y < 0) {
		cout << "3 chetvert";
	}
	if (x > 0 and y < 0) {
		cout << "4 chetvert";
	}
}