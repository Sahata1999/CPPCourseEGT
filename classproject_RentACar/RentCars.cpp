#include <iostream>
#include "FamilyCars.h"
#include "Cars.h"
#include "LuxuryCars.h"
#include <vector>
using namespace std;


int main() {

	vector<Cars*> allcars;

	FamilyCars fcar1("Audi", "A4", "Sedan", "Black", "123456789", "CA1234CA", 6.5, 150, 499);

	double totalcostf1;

	fcar1.getReceipt();

	totalcostf1 = fcar1.getReceipt();

	cout << "Total cost: " << totalcostf1 << endl;

	allcars.push_back(&fcar1);


	FamilyCars fcar2("Honda", "Legend", "Sedan", "White", "ASD123DSA321", "CB2135CK", 10, 200, 300);

	double totalcostf2;

	totalcostf2 = fcar2.getReceipt();
	cout << "Total cost: " << totalcostf2 << endl;

	allcars.push_back(&fcar2);

	FamilyCars fcar3("Ford", "Mondeo", "Wagon", "Blue", "FFM67WJ7", "OB3147BP", 8.5, 100, 350);

	double totalcostf3;
	totalcostf3 = fcar3.getReceipt();
	cout << "Total cost: " << totalcostf3 << endl;

	allcars.push_back(&fcar3);



	LuxuryCars lcar1("Mercedes", "S500", "Sedan", "Black", "123456789", "CA1234CA", 20, 400, 150, 100);

	double totalcostl1;
	totalcostl1 = lcar1.getReceipt();
	cout << "Total cost: " << totalcostl1 << endl;

	allcars.push_back(&lcar1);


	LuxuryCars lcar2("BMW", "X5", "SUV", "White", "987654321", "CA4321CA", 15.5, 450, 180, 100);

	double totalcostl2;

	lcar2.getReceipt();

	totalcostl2 = lcar2.getReceipt();
	cout << "Total cost: " << totalcostl2 << endl;	

	allcars.push_back(&lcar2);

	LuxuryCars lcar3("Audi", "A8", "Sedan", "Black", "123456789", "CA1234CA", 13, 300, 200, 50);

	double totalcostl3;

	totalcostl3= lcar3.getReceipt();
	cout << "Total cost: " << totalcostl3 << endl;

	allcars.push_back(&lcar3);


	for (int i = 0; i < allcars.size(); i++) {
		allcars[i]->display();
		cout << endl;
	}










	







	return 0;
}