#include "Date.h"
#include <iostream>



const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


Date::Date(int m, int d, int y) {
    setDate(m, d, y);
} 


void Date::setDate(int mm, int dd, int yy) {
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

    // test for a leap year
    if (month == 2 && leapYear(year))
        day = (dd >= 1 && dd <= 29) ? dd : 1;
    else
        day = (dd >= 1 && dd <= days[month]) ? dd : 1;
} 

 
Date& Date::operator++() {
    helpIncrement(); 
    return *this; 
} 



Date Date::operator++(int) {
    Date temp = *this; 
    helpIncrement();

    
    return temp; 
} 


Date& Date::operator--() {
    helpDecrement(); 
    return *this;
} 


Date Date::operator--(int) {
    Date temp = *this; 
    helpDecrement();

    
    return temp; 
} 


const Date& Date::operator+=(int additionalDays) {
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this; 
} 


const Date& Date::operator-=(int subtractionalDays) {
    for (int i = 0; i < subtractionalDays; ++i) {
        helpDecrement();
    }

    return *this; // enables cascading
} // end function operator-=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear(int testYear) const {
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; // a leap year
    else
        return false; 
} 


bool Date::endOfMonth(int testDay) const {
    if (month == 2 && leapYear(year))
        return testDay == 29; // last day of Feb. in leap year
    else
        return testDay == days[month];
} 


void Date::helpIncrement() {
    
    if (!endOfMonth(day))
        day++; 
    else
        if (month < 12) 
        {
            month++; 
            day = 1; 
        } 
        else 
        {
            year++; 
            month = 1; 
            day = 1; 
        } 
} 


void Date::helpDecrement() {
    if (day != 1) { 
        day--; // decrement day
    }
    else {
        if (month > 1) { 
            month--; 
        }
        else {
            year--; 
            month = 12; 
        }

        
        day = days[month];

        
        if (month == 2) {
            if (leapYear(year)) { 
                day = 29; 
            }
        }
    }
}

ostream& operator<<(ostream& output, const Date& d) {
    static std::string monthName[13] = { "", "January", "February",
       "March", "April", "May", "June", "July", "August",
       "September", "October", "November", "December" };

    output << d.day << ' ' << monthName[d.month] << ", " << d.year;
    return output; 

}