/*#include <iostream>

using namespace std;

struct robot_t {

	int health;
	int speed;
	int damage;

	void attack() {
		cout << "attack: " << damage << endl;
	}

	void take_damage() {
		cout << "health: " << health << endl;
	}

	void move() {
		cout << "speed: " << damage << endl;
	}

};

int main() {

	robot_t robot_1 = { 50,20,100 };

	robot_1.attack();
	robot_1.take_damage();

	robot_t* robot_2 = new robot_t { 50,20,100 };

	robot_2->attack();
	robot_2->take_damage();

	delete robot_2;

}*/