#include <iostream>
using namespace std;

int sum_of_number(int number) {

	if (number < 10) {
		return number;
	}
	int d = number % 10;
	sum_of_number(number / 10 + d);

}

int main() {
	cout << "input number: ";
	int number;
	cin >> number;
	if (number < 0) {
		number *= -1;
	}
	cout << "result: " << sum_of_number(number);
	return 0;
}