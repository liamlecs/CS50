#include <iostream>
using namespace std;

int get_startsize(int &start) {
	cout << "Start Size: ";
	cin >> start;
	return start;
}

int get_endsize(int &end) {
	cout << "End Size: ";
	cin >> end;
	return end;
}

int get_year(int &start, int &end, int &year) {
	while (end > start) {
		start += ((start / 3) - (start / 4));
		year++;
	}
	return year;
}
int main() {
	// Getting start population size
	int start = 0, end = 0;
	do {
		get_startsize(start);
	} while (start < 9);

	// Getting end population size
	do {
		get_endsize(end);
	} while (end < start);

	// Algorithm to obtain year needed to reach end population size from start size
	int year = 0;
	get_year(start, end, year);

	// Print out results

	cout << "Year: " << year << endl;
	return 0;
}