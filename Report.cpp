#include "Report.h"
#include <iostream>

using namespace std;

Report::Report()	            
{
	
}

void Report::getProduct()
{
	cout << "��� ������ ������� getProduct() �� ����������!" << endl;
}
void Report::outProduct()
{
	cout << "��� ������ ������� outProduct() �� ������������!" << endl;
}

void Report::show() const
{
	cout << _nameRpt << endl;
	cout << "����� ���������� ��������" << " : " << _numCtgD << endl;
	cout << "����� ���������� �����������" << " : " << _numCmp << endl;
	cout << "����� ���������� ����������" << " : " << _numSmph << endl;
	cout << "����� ���������� ������� �������" << " : " << _numCtgA << endl;
	cout << "����� ���������� �������������"<<" : " << _numFR << endl;
	cout << "����� ���������� ���������� �����" << " : " << _numWM << endl;
	cout << "����� ���������� ��������� �������������" << " : " <<_numMbl << endl;
}


