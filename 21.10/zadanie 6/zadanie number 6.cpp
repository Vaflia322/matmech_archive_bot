#include <iostream>

using namespace std;

int main() {
	int count, count1, count2, count3;
	cin >> count;
	count1 = count / 100;
	count = count % 100;
	count2 = count / 10;
	count3 = count % 10;
	if ((count1 == count2) or (count2 == count3) or (count1 == count3)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}