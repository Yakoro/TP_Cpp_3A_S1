#include <iostream>
#include "Date.h"

int main() {
	
	Date date(2, 12, 2022);
	std::cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;

}