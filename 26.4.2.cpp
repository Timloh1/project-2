#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

class Number {

private:

	string numberPhone = "";
	string name;

public:

	string getName() {
		return name;
	}

	string getNumberPhone() {
		return numberPhone;
	}

	void setName(string value) {
		name = value;
	}

	void setNumberPhone(string value) {

		while (true) {

			bool help = true;

			if (value.length() == 12 && value[0] == '+' && value[1] == '7') {

				for (int i = 2; i <= 11; ++i) {
					if (!(value[i] >= '0' && value[i] <= '9')) {
						help = false;
						break;
					}
				}

				if (help) {
					numberPhone = value;
					break;
				}
				else {
					cerr << "Incorrect name! Repeat the set!" << endl;
					cout << "Enter numder phone (in format: +77777777777):" << endl;
					cin >> numberPhone;
				}

			}
			else {
				cerr << "Incorrect name! Repeat the set!" << endl;
				cout << "Enter numder phone (in format: +77777777777):" << endl;
				cin >> numberPhone;
			}

		}

	}

};

class Phone {

private:

	vector <Number> addressBook;

public:

	void add() {

	}

	void call() {

	}

	void sms() {

	}

};


int main() {

	string command = "";

	cout << "Enter command (add, call, sms, exit):" << endl;
	cin >> command;

	while (true) {

		if (command == "add") {

			

		}
		else if (command == "call") {

		

		}
		else if (command == "sms") {


		}
		else if (command == "exit") {
			return 0;
		}
		else {
			cerr << "Incorrect command! Repeat the set!" << endl;
		}

		cout << "Enter command (add, call, sms, exit):" << endl;
		cin >> command;

	}

}