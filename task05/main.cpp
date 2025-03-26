#include <iostream>
using namespace std;

int max_of_number(int number) {

	if (number < 10) {
		return number;
	}
	int d = number % 10;
	number = max_of_number(number / 10);
	return d > number ? d : number;
}

int main() {
	cout << "input number: ";
	int number;
	cin >> number;
	if (number < 0) {
		number *= -1;
	}
	cout << "result: " << max_of_number(number);
	return 0;
}