#include"input.h"

Cars Input::inputInfo() {
	string brand;
	string model;
	int year;
	string color;
	string fuel;
	string transmission;
	string vin;
	string plate;
	
	cout << "enter brand"<< endl;
	cin >> brand;
	cout << "enter model" << endl;
	cin >> model;
	cout << "enter year" << endl;
	cin >> year;
	cout << "enter color" << endl;
	cin >> color;
	cout << "enter fuel" << endl;
	cin >> fuel;
	cout << "enter transmission" << endl;
	cin >> transmission;
	cout << "enter vin" << endl;
	cin >> vin;
	cout << "enter plate" << endl;
	cin >> plate;

	Cars myCar(brand,model,year,color,fuel,transmission,vin,plate);
	return myCar;

}
