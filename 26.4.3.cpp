#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

class Screen {

private:

	bool display[50][80];
	int xTopLeft = 0;
	int yTopLeft = 0;
	int width = 0;
	int	height = 0;

public:

	void initialFilling() {

		cout << "Enter width: " << endl;
		cin >> width;

		cout << "Enter height: " << endl;
		cin >> height;

		cout << "Enter x top left: " << endl;
		cin >> xTopLeft;

		cout << "Enter y top left: " << endl;
		cin >> yTopLeft;

		if (xTopLeft <= 0) xTopLeft = 0;
		if (xTopLeft >= 50) xTopLeft = 50;
		if (yTopLeft <= 0) yTopLeft = 0;
		if (yTopLeft >= 80) yTopLeft = 80;

		xTopLeft--;
		yTopLeft--;

		for (int i = 0; i < 50; ++i) {
			for (int j = 0; j < 80; ++j) {
				if (i >= xTopLeft && i <= xTopLeft + height - 1 && j >= yTopLeft && j <= yTopLeft + width - 1) {
					display[i][j] = true;
				}
				else {
					display[i][j] = false;
				}
			}
		}

	}

	void move() {

		int yVec, xVec;

		cout << "Enter x vector: " << endl;
		cin >> xVec;

		cout << "Enter y vector: " << endl;
		cin >> yVec;

		xTopLeft += xVec;
		yTopLeft += yVec;

		if (xTopLeft <= 0) xTopLeft = 0;
		if (xTopLeft >= 50) xTopLeft = 49;
		if (yTopLeft <= 0) yTopLeft = 0;
		if (yTopLeft >= 80) yTopLeft = 79;

		cout << "New coordinates: " << xTopLeft << ", " << yTopLeft << endl;

	}
	void resize() {

		cout << "Enter width: " << endl;
		cin >> width;

		cout << "Enter height: " << endl;
		cin >> height;

		cout << "New width x height: " << width << " x " << height << endl;

	}	
	void display—onclusion() {

		for (int i = 0; i < 50; ++i) {
			for (int j = 0; j < 80; ++j) {
				if (i >= xTopLeft && i <= xTopLeft + height - 1 && j >= yTopLeft && j <= yTopLeft + width - 1) {
					display[i][j] = true;
				}
				else {
					display[i][j] = false;
				}
			}
		}

		for (int i = 0; i < 50; ++i) {
			for (int j = 0; j < 80; ++j) {
				cout << display[i][j];
			}
			cout << endl;
		}

	}

};

Screen newScreen;

int main() {

	newScreen.initialFilling();

	string command = "";

	cout << "Enter command (move, resize, display, close):" << endl;
	cin >> command;

	while (true) {

		if (command == "move") {
			newScreen.move();
		}
		else if (command == "resize") {
			newScreen.resize();
		}
		else if (command == "display") {
			newScreen.display—onclusion();
		}
		else if (command == "close") {
			return 0;
		}
		else {
			cerr << "Incorrect command! Repeat the set!" << endl;
		}

		cout << "Enter command (move, resize, display, close):" << endl;
		cin >> command;

	}

}