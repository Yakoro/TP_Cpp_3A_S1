#include <iostream>
#include "Date.h"
#include "Livre.h"

int main() {
	
	Date date(2, 12, 2022);
	std::cout << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;

	Livre harry("Harry Potter", "Rowling", "Anglais", "SF", date, "01234567890");
	std::cout << harry.getIsbn() << std::endl;

	std::cout << (harry.getDate()).getDay() << std::endl;
	//pareil que
	Date date2 = harry.getDate();
	std::cout << date2.getMonth() << std::endl;
	std::cout << date2.getYear() << std::endl;
	
}