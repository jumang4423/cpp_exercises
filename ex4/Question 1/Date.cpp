#include <iostream>
#include "Date.h"

void Date::set(int m, int d, int y) {
    month = (m >= 1 && m <= 12) ? m : 1;
    day = (d >= 1 && d <= 31) ? d : 1;
    year = y;
}

void Date::print() const {
    std::cout << "month: " << month << ", day: " << day << ", year: " << year << std::endl;
}

int Date::get_month() const
{
    const int const_month = month;
    return const_month;
}

int Date::get_year() const
{
    const int const_year = year;
    return const_year;
}

int Date::get_day() const
{
    const int const_day = day;
    return const_day;
}

void Date::inc_day() {
    day++;
}

void Date::inc_month() {
    month++;
}

void Date::inc_year() {
    year++;
}