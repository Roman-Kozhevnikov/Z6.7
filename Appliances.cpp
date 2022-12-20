#include "Appliances.h"
#include <iostream>

int Appliances::_numCtgA = 0;
int Fridge::_numFR = 0;
int WMachine::_numWM = 0;

Appliances::Appliances()
{
	_numCtgA = 0;
}

Appliances:: Appliances(string nameCTG) : _nameCtgA(nameCTG) 
{

	_numCtgA = 0;
}

Appliances::~Appliances(){}

string Appliances::get_nameCtgA()
{
	return _nameCtgA;
}


void Appliances::show() const
{
	cout << _nameCtgA << " : ";
}

Fridge::Fridge()
{
	_numFR = 0;
}

Fridge::Fridge(Appliances* a, string nameFR, int weight) :
	Appliances(a->get_nameCtgA()), _nameFR(nameFR)
{
	_weight = weight;
	_numFR = 0;
}

Fridge::~Fridge(){}

void Fridge::getProduct()
{
	_numFR += 1;
	_numCtgA += 1;
}

void Fridge::outProduct()
{
	if (_numFR > 0)
		_numFR -= 1;
	if (_numCtgA > 0)
		_numCtgA -= 1;
	else cout << "Товара нет вналичии!\n";

}

void Fridge::show() const
{
	Appliances::show();
	cout << _nameFR << " : " << " вес товара : " << _weight << " : ";
	cout << "количество в магазине : " << _numFR << endl;
}

WMachine::WMachine()
{
	_numWM = 0;
}

WMachine::WMachine(Appliances* a, std::string nameWM, int weight)
	: Appliances(a->get_nameCtgA()),  _nameWM(nameWM)
{
	_weight = weight;
	_numWM = 0;
}

WMachine::~WMachine(){}

void WMachine::getProduct()
{
	_numWM += 1;
	_numCtgA += 1;
}

void WMachine::outProduct()
{
	if (_numWM > 0)
		_numWM -= 1;	
	if (_numCtgA > 0)
		_numCtgA -= 1;
	else cout << "Товара нет вналичии!\n";

}

void WMachine::show() const
{
	Appliances::show();
	cout << _nameWM << " : " << " вес товара : " << _weight << " : ";
	cout << "количество в магазине : " << _numWM << endl;
}