/*#include <iostream>

using namespace std;

class PlaneControl {

	double leftAileron = 0;
	double rightAileron = 0;

  public:

	void turnLeft() {
		leftAileron -= 30;
		rightAileron += 30;
	}

	void turnRight() {
		leftAileron += 30;
		rightAileron -= 30;
	}

  private:

	double elevator = 0;

  public:

	void setElevator(double value) {
		if (value < -30) value = -30;
		if (value > 30) value = 30;
		if (value == elevator) return;
		elevator = value;
	}

	double getLeftAileron() {
		return leftAileron;
	}

	double getRightAileron() {
		return rightAileron;
	}

	double getElevator() {
		return elevator;
	}

	friend void showInfo(PlaneControl* planeControl);

	static void showInfoInClass(PlaneControl* planeControl) {

		cout << "Left Aileron: " << planeControl->leftAileron << endl;
		cout << "Right Aileron: " << planeControl->rightAileron << endl;
		cout << "Elevator: " << planeControl->elevator << endl;

	}

};

void showInfo(PlaneControl* planeControl) {

	//cout << "Left Aileron: " << planeControl->getLeftAileron() << endl;
	//cout << "Right Aileron: " << planeControl->getRightAileron() << endl;
	//cout << "Elevator: " << planeControl->getElevator() << endl;
	//без friend. лучше использовать get или set.

	cout << "Left Aileron: " << planeControl->leftAileron << endl;
	cout << "Right Aileron: " << planeControl->rightAileron << endl;
	cout << "Elevator: " << planeControl->elevator << endl;

}

int main() {

	PlaneControl* planeControl = new PlaneControl();

	planeControl->turnLeft();
	planeControl->setElevator(13.5);
	showInfo(planeControl);
	PlaneControl::showInfoInClass(planeControl);

	delete planeControl;
	planeControl = nullptr;

}*/