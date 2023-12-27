#include <iostream>
using namespace std;

int main() {
	int change;
	cout << "Changed owed: ";
	cin >> change;
	int quarters = change / 25;
	int dimes = (change - quarters * 25) / 10;
	int nickels = (change - quarters * 25 - dimes * 10) / 5;
	int pennies = (change - quarters * 25 - dimes * 10 - nickels * 5);
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;
	return 0;
}