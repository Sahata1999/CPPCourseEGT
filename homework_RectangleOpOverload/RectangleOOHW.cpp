#include <iostream>
using namespace std;
#include "Shape.h"
#include "TwoDimShape.h"
#include"Rectangle.h"


int main() {

	Rectangle rec1(50, 2000);
	Rectangle rec2(49, 2050);

	if (rec1 > rec2) {
		cout << "rec1 is bigger" << endl;
	}
	else {
		cout << "Rec 2 is bigger" << endl;
	}

//	rec1.setArea();
//	rec1.getArea();
//	rec1.print();
}