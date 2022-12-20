#pragma once
#include "Devise.h"
#include "Appliances.h"
#include "MobileCond.h"
#include <string>

class Report : public Fridge, WMachine, Computer, Smartphone, MobileCond
{  
private:
	string _nameRpt = "Отчёт по магазину : ";
public:
	Report();		    
	void getProduct();
	void outProduct();
	void show() const override;


};

