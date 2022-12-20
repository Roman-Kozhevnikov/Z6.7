#pragma once
#include "IElectronics.h"
#include <iostream>


class Devise : virtual public IElectronics
{
protected:
	std::string _nameCtgD;   // наименование общей категории (смартфон, компьютеры и прочее)
	int _batteryLife = 0;
	static int _numCtgD;	

public:
	Devise();
	Devise(std::string);
	string get_nameCtgD();
	virtual ~Devise();
	void show() const override; 
	
};


class Computer :  virtual public Devise
{
protected:
	string _nameCmp;      // Марка комьютера
	static int _numCmp;
public:
	Computer();
	Computer(Devise*, std::string, int);	
	virtual ~Computer();
	void getProduct();
	void outProduct();
	void show() const override;
};

class Smartphone : virtual public Devise
{
protected:
	std::string _nameSmph;       // Марка смартфона
	static int _numSmph;
public:
	Smartphone();
	Smartphone(Devise*, std::string, int);
	virtual ~Smartphone();
	void getProduct();
	void outProduct();	
	void show() const override;
};

