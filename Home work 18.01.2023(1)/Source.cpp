#include "Header.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ElectricBike<std::string> a;
	a.printBiKeInfo();
	a.Transport<std::string>::printFuelInfo();

}
