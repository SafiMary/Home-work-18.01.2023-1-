#pragma once
#include <iostream>

template <typename T1>
class ElectroFuel {
public:
	void info() {//метод который указывает какое топливо, а именно электрическое
		std::cout << "electric fuel" << std::endl;
	}
private:

};

template <typename T1>
class Transport : public ElectroFuel<T1> {
public:
	Transport(T1 fuel) : _fuel(fuel) {}
	void printFuelInfo(){
	 std::cout << _fuel.info() << std::endl;
	}
protected:
	T1 _fuel; //топливо

};
template <typename ElectroFuel>
class ElectricBike : public Transport< ElectroFuel>{
public:
	ElectricBike(): _name_bike(name_bike){}
	void printBiKeInfo() {
		std::cout << "Ќазвание велосипеда: " << name_bike << std::endl;
	}
private:
	ElectroFuel _name_bike;
};

