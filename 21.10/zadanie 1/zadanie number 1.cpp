#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int count;
	cin >> count;
	cout << "Большая цифра" << ' ' << max(count / 10, count % 10) << ' ' << "Меньшая цифра" << ' ' << min(count / 10, count % 10);
}