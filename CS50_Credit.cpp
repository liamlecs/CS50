#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	// User Input
	long long number;
	cout << "Number: ";
	cin >> number;
	long long cc = number;

	// Checking length
	int length = to_string(cc).length();
	cout << "Length of number: " << length << endl;

	if (length != 13 && length != 15 && length != 16) {
		cout << "INVALID!" << endl;
		return 1;
	}

	// Finding sum
	int sum1 = 0, sum2 = 0, mod1 = 0, mod2 = 0, d1 = 0, d2 = 0;

	while (cc >= 1) {
		mod1 = cc % 10;
		cc /= 100;
		sum1 += mod1;
	}

	cc = number / 10;
	while (cc >= 1) {
		mod2 = cc % 10;
		cc /= 100;
		mod2 *= 2;
		d1 = mod2 % 10;
		d2 = mod2 / 10;
		sum2 += d1 + d2;
	}

	int totalsum = sum1 + sum2;

	cout << "Total sum is: " << totalsum << endl;
	
	// Checking card name
	if (totalsum % 10 == 0) {
		int firstdigits = number / pow(10, length - 2);
		if (firstdigits == 34 || firstdigits == 37) {
			cout << "AMERICAN EXPRESS" << endl;
		}
		else if (firstdigits >= 51 && firstdigits <= 55) {
			cout << "MASTERCARD" << endl;
		}
		else if (firstdigits/10 == 4) {
			cout << "VISA" << endl;
		}
	}
	return 0;	
}