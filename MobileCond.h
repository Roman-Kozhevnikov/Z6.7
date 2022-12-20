#pragma once
#include "Devise.h"
#include "Appliances.h"
#include <string>
class MobileCond : virtual public Devise, virtual public Appliances
{
protected:
	string _nameMbl;
	static int _numMbl;

public:
	
	MobileCond();
	MobileCond(Appliances*, std::string, int , int);
	virtual ~MobileCond();
	void getProduct() override;
	void outProduct() override;
	void show() const override;

};

