/*#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

class Track {

private:

	string name = "";
	string data = "";
	int duration = 0;

public:

	void setName(string value) {
		name = value;
	}

	void setData(string value) {

		if (value.length() == 10 && value[2] == '.' && value[5] == '.' && stoi(value.substr(0, 2)) >= 1 &&
				stoi(value.substr(0, 2)) <= 31 && stoi(value.substr(3, 2)) >= 1 && stoi(value.substr(3, 2)) <= 12 && 
				stoi(value.substr(6, 4)) >= 1950 && stoi(value.substr(6, 4)) <= 2024) {
			data = value;
		}
		else {
			data = "00.00.0000";
		}

	}

	void setDuration(int value) {
		duration = value;
	}

	string getName() {
		return name;
	}

	string getData() {
		return data;
	}

	int getDuration() {
		return duration;
	}

};

class Player {

private:

	vector <Track> allTrack;
	Track error;

public:

	Track getTrackByName(string value) {

		for (int i = 0; i < allTrack.size(); ++i) {
			if (allTrack[i].getName() == value) {
				return allTrack[i];
			}
		}

		return error;

	}

	void addTrack(string newName, string newData, int newDuration) {

		Track newTrack;

		newTrack.setName(newName);
		newTrack.setData(newData);
		newTrack.setDuration(newDuration);

		allTrack.push_back(newTrack);

	}

	void addAllTrack() {

		int count, newDuration;
		string newName, newData;

		cout << "How many tracks should add:" << endl;
		cin >> count;

		for (int i = 0; i < count; ++i) {

			cout << "Enter name " << i + 1 << " track:" << endl;
			cin >> newName;

			cout << "Enter data " << i + 1 << " track (in format 00.00.0000):" << endl;
			cin >> newData;

			cout << "Enter duration " << i + 1 << " track:" << endl;
			cin >> newDuration;

			addTrack(newName, newData, newDuration);

		}
	}

	int getSizAllTrack() {
		return allTrack.size();
	}

	Track getElementAllTrack(int count) {
		return allTrack[count];
	}

};

void playTrack(Track newTrack, string newName, Player newPlayer) {

	while (true) {

		if (newPlayer.getTrackByName(newName).getName() == "") {
			cerr << "Incorrect name! Repeat the set!" << endl;
			cout << "Enter name track:" << endl;
			cin >> newName;
		}
		else {

			newTrack = newPlayer.getTrackByName(newName);

			cout << "---------------------" << endl;
			cout << "Playback has started!" << endl;
			cout << "Name: " << newTrack.getName() << endl;
			cout << "Data: " << newTrack.getData() << endl;
			cout << "Duration: " << newTrack.getDuration() << endl;
			cout << "---------------------" << endl;

			break;

		}

	}

}

Player newPlayer;

int main() {

	srand(time(nullptr));

	newPlayer.addAllTrack();

	Track newTrack;
	bool playback = false;
	bool pause = false;
	bool stop = false;

	string command = "";

	cout << "Enter command (play, pause, next, stop, exit):" << endl;
	cin >> command;

	while (true) {
		
		if (command == "play") {

			if (!playback) {

				string newName;

				cout << "Enter name track:" << endl;
				cin >> newName;

				playTrack(newTrack, newName, newPlayer);

				pause = false;
				playback = true;
				stop = false;

			}

		}
		else if (command == "pause") {

			if (!pause && playback) {
				cout << "The recording has been paused!" << endl; \
				pause = true;
				playback = true;
				stop = false;
			}

		}
		else if (command == "next") {

			int countrNext = rand() % newPlayer.getSizAllTrack();

			cout << "---------------------" << endl;
			cout << "Playback has started!" << endl;
			cout << "Name: " << newPlayer.getElementAllTrack(countrNext).getName() << endl;
			cout << "Data: " << newPlayer.getElementAllTrack(countrNext).getData() << endl;
			cout << "Duration: " << newPlayer.getElementAllTrack(countrNext).getDuration() << endl;
			cout << "---------------------" << endl;

			stop = false;
			playback = true;
			pause = false;

		}
		else if (command == "stop") {

			if (!stop && playback) {
				cout << "The recording has been stoped!" << endl; \
				stop = true; 
				playback = false;
				pause = false;
			}

		}
		else if (command == "exit") {
			return 0;
		}
		else {
			cerr << "Incorrect command! Repeat the set!" << endl;
		}

		cout << "Enter command (play, pause, next, stop, exit):" << endl;
		cin >> command;

	}

}*/