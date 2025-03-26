#include <iostream>
using namespace std;

bool count_of_number(int number) {
	if (number <= 0 || number % 3 != 0) {
		return false;
	}
	if (number == 1) {
		return true;
	}
	count_of_number(number / 3);

}

int main() {
	cout << "input number: ";
	int number;
	cin >> number;
	/*if (number < 0) {
		number *= -1;
	}*/
	cout << "result: " << (count_of_number(number) == true ? "true" : "false");
	return 0;
}