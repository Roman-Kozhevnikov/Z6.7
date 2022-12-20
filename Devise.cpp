#include "Devise.h"
#include <iostream>

int Devise::_numCtgD = 0;
int Computer::_numCmp = 0;
int Smartphone::_numSmph = 0;


Devise::Devise()
{
	_numCtgD = 0;
}

Devise::Devise(std::string nameCtgD) : _nameCtgD(nameCtgD)
{
	_numCtgD = 0;
}

string Devise::get_nameCtgD()
{
	return _nameCtgD;
}

Devise::~Devise(){}

void Devise::show() const  
{ 
	cout << _nameCtgD << " : " ;
}

Computer::Computer()
{
	_numCmp = 0;
}

Computer::Computer(Devise* d, std::string nameCmp, int batteryLife)
	                 : Devise(d->get_nameCtgD()), _nameCmp(nameCmp)
{
	_batteryLife = batteryLife;
	_numCmp = 0;
}

Computer::~Computer(){}

void Computer::getProduct()
{
	_numCmp += 1;
	_numCtgD += 1;
}

void Computer::outProduct()
{
	if (_numCmp > 0)
	_numCmp -= 1;
	if (_numCtgD > 0)
		_numCtgD -= 1;
	else cout << "Товара нет вналичии!\n";

}

void Computer::show() const 
{
	Devise::show();	
	cout << _nameCmp << " : " << "Время работы баттареи : " << _batteryLife << " : ";
	cout << "количество в магазине : " <<_numCmp << endl;
}

Smartphone::Smartphone()
{
	_numSmph = 0;
}

Smartphone::Smartphone(Devise* d, std::string nameSmph, int batteryLife)
                                  : Devise(d->get_nameCtgD()), _nameSmph(nameSmph)
{
	_batteryLife = batteryLife;
	_numSmph = 0;
}

Smartphone::~Smartphone(){}

void Smartphone::getProduct()
{
	_numSmph += 1;
	_numCtgD += 1;
}

void Smartphone::outProduct()
{
	if (_numSmph > 0)
		_numSmph -= 1;
	if (_numCtgD > 0)
		_numCtgD -= 1;
	else cout << "Товара нет вналичии!\n";

}

void Smartphone::show() const
{
	Devise::show();
	cout << _nameSmph << " : " << "Время работы баттареи : " << _batteryLife << " : ";
	cout << "количество в магазине : " << _numSmph << endl;
}


