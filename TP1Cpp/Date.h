#pragma once

class Date {
public:
	Date(int day = 1, int month = 1, int year = 2000);
	int getDay();
	int getMonth();
	int getYear();
private:
	int _day;
	int _month;
	int _year;
};