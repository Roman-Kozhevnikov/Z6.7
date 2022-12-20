#pragma once
#include "IElectronics.h"
//#include <string>


class Appliances : virtual public IElectronics
{
protected:
	string _nameCtgA;   // ������������ ����� ��������� (������������, ���������� ������� � ������)
	int _weight = 0;
	static int _numCtgA;
public:
	Appliances();
	Appliances(string);
	string get_nameCtgA();
	virtual ~Appliances();
	virtual void show() const override;
	
	
};

class Fridge : public virtual Appliances // �����������
{
protected:
	string _nameFR;  // ����� ������������
	int _weight = 0;
	static int _numFR;
public:
	Fridge();
	Fridge(Appliances*,string, int);
	virtual ~Fridge();
	void getProduct();
	void outProduct();
	void show() const override;
};

class WMachine : public virtual Appliances    // ��������� ������
{
protected:
	string _nameWM;        // ����� ���������� ������
	static int _numWM;   
public:
	WMachine();	
	WMachine(Appliances*, string, int);
	virtual ~WMachine();
	void getProduct();
	void outProduct();
	void show() const override;
};


