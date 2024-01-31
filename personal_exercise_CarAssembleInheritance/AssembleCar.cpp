#include <iostream>
#include "Car.h"
#include "Engine.h"
#include "Transmission.h"
using namespace std;




int main() {

	Engine engine1("Hemi",2500,"5700cc", "370hp", "500NM", "Gasoline");
	Transmission trans1("ZTF", 5000, "Automatic", 8);
	engine1.printEngine();
	trans1.printTransmission();



}