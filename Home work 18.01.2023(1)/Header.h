#pragma once
#include <iostream>
//#include <ostream>

class ElectroFuel {
public:
	ElectroFuel(){}
	void info() {//����� ������� ��������� ����� �������, � ������ �������������
		std::cout << "electric fuel" << std::endl;
	}
private:

};

template <typename ElectroFuel>
class Transport : public ElectroFuel {
public:
	Transport() {}
	void printFuelInfo(){
	 _fuel.info();
	}
private:
	ElectroFuel _fuel; //�������

};

class ElectricBike : public Transport< ElectroFuel>{
public:
	ElectricBike(std::string name_bike): _name_bike(name_bike){}
	void printBiKeInfo() {
		std::cout << "�������� ����������: \n" << _name_bike << std::endl;
	}
private:
	std::string _name_bike;
};   
   
