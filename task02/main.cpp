#include <iostream>
using namespace std;

int count_of_number(int number) {

	if (number < 10) {
		return 1;
	}
	int d = numb;
	count_of_number(number / 10 + d);

}

int main() {
	cout << "input number: ";
	int number;
	cin >> number;
	if (number < 0) {
		number *= -1;
	}
	cout << "result: " << count_of_number(number);
	return 0;
}