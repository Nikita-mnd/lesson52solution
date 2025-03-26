#include <iostream>
using namespace std;

bool count_of_number(int a, int b) {
	if (a < 10 && b < 10) {
		if (a < b) {
			return false;
		}
	}
	int d = a % 10;
	a /= 10;
	if (a == 0&&b==0) {
		return true;
	}
	count_of_number(a, b-d);

}

int main() {
	cout << "input number: ";
	int a,b;
	cin >> a >> b;
	if (a < 0) {
		a *= -1;
	}
	if (b < 0) {
		b *= -1;
	}
	cout << "result: " << (count_of_number(a,b) == true ? "true" : "false");
	return 0;
}