#include "Header.h"
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ElectricBike  a("Шустрик");
	a.printBiKeInfo();
	a.printFuelInfo();

}
