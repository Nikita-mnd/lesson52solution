#include <iostream>
using namespace std;

int max_of_number(int x, int n) {
    if (n < 0) {
		return 0;
	}
	if (n <= 1) {
		return n == 0?1:x;
	}
	x *= max_of_number(x, n - 1);
	return x;
}

int main() {
	cout << "input x and n: ";
	int n,x;
	cin >> x >> n;
	
	cout << "result: " << max_of_number(x, n);
	return 0;
}