#include "Cars.h"
#include"input.h"

int main() {

	vector<Cars>vehicle;
	Input input;

	for (int i = 0; i < 2; i++) {
		Cars myCar = input.inputInfo();
		vehicle.push_back(myCar);
	}

	for (int i = 0; i < vehicle.size(); i++) {
		vehicle.at(i).print();
	}
}
