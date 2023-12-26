#include <iostream>
using namespace std;

int main() {
	int height = 0;
	cout << "Height: ";
	cin >> height;
	for (int rows = 1; rows <= height; rows++) {
		for (int column = 1; column <= height; column++) {
			if (column <= height - rows) {
				cout << " ";
			}
			else cout << "#";
		}
		cout << endl;
	}
	return 0;
	}

