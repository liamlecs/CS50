#include <iostream>
using namespace std;

// Function to get user input

int getinput() {
	int height;
	cout << "Height: ";
	cin >> height;
	return height;
}

// Draw function
void draw(int height) {
	for (int rows = 0; rows < height; rows++) {
		// Printing space
		for (int space = 0; space <= height - rows - 1; space++) {
			cout << " ";
		}
		// Printing pyramid left side
		for (int columns = 0; columns <= rows; columns++) {
			cout << "#";
		}
		// Priting space between left and right side 
		cout << "  ";
		// Priting pyramid right side
		for (int columns = 0; columns <= rows; columns++) {
			cout << "#";
		}
		// Endl to get to new row
		cout << endl;
	}
}

int main() {

	draw(getinput());

	return 0;
}