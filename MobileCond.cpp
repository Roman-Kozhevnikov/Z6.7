#include "MobileCond.h"

int MobileCond::_numMbl = 0;

MobileCond::MobileCond()
{
	_numMbl = 0;
}

MobileCond::MobileCond(Appliances* ap, std::string nameMbl, int batteryLife, int weight)
	: Appliances(ap->get_nameCtgA()), _nameMbl(nameMbl)
{
	_batteryLife = batteryLife;
	_weight = weight;
	_numMbl = 0;
}

MobileCond::~MobileCond() {}

void MobileCond::getProduct()
{
	_numMbl += 1;
	_numCtgA += 1;
}

void MobileCond::outProduct()
{
	if (_numMbl > 0)
		_numMbl -= 1;
	if (_numCtgA > 0)
		_numCtgA -= 1;
	else cout << "������ ��� ��������!\n";

}


void MobileCond::show() const
{
	Appliances::show();
	cout << _nameMbl << " : " << "����� ������ �������� : " << _batteryLife << " : " ;
	cout << " ��� ������ : " << _weight << " : ";
	cout << "���������� � �������� : " << _numMbl << endl;
}

