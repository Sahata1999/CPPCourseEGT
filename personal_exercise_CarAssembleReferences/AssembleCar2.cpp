#include"Engine.h"
#include"Car.h"
#include <iostream>
#include <string>


int main() {

	Engine engine1("5700cc", "380hp", "500NM", "Gasoline");

	Car car1("Dodge Challenger", 50000, engine1);

	car1.printCar();


}