#include "Orders.h"

Orders::Orders(Drinks*drinks ,string date)
{
	setDate(date);
	

}

void Orders::setDate(string date)
{
	this->date = date;
}

string Orders::getDate()
{
	return date;
}

double Orders::getTotalAmount(){
    double totalCost = 0.0;
    for ( auto& drink :drinks) {
        totalCost = totalCost + drink->getDrPrice();
    }
    return totalCost;
}

void Orders::printOrderInfo() {
cout << "Date: " << date << endl;
for (auto& drinks : drinks) {
	drinks->displayDrink();
    }
cout << "Total Amount: " << getTotalAmount() << endl;
}