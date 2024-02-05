#include "Drinks.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include <iostream>

int main()
{
NonAlcoholic nonal1("Coca Cola", 1.50, 2, 0.50, 1.0);
Alcoholic al1("Budweiser", 2.50, 3, "5%", "Beer", 1.20);

nonal1.displayDrink();
nonal1.calculatePrice();

al1.displayDrink();
al1.calculatePrice();



//// CODE IS UNFINISHED!!!














}

