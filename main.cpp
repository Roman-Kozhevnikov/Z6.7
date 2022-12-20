#include <iostream>
#include "Report.h"
#include "MobileCond.h"
#include <typeinfo>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int Size = 5;
	Appliances* paf = new Appliances("������������");
	Appliances* paw = new Appliances("���������� �������");
	Appliances* pamb = new Appliances("�������� ������������");
	Devise* pdc = new Devise("����������");
	Devise* pds = new Devise("���������");
	Fridge* pfr = new Fridge(paf,"NEEF", 40);
	WMachine* pwm = new WMachine(paw, "Bosh", 50);
	Computer* pcm = new Computer(pdc, "Sumsung", 3);
	Smartphone* psm = new Smartphone(pds, "Apple", 4);
	MobileCond* pmbc = new MobileCond (pamb, "Hitach", 2, 15);
	Report* r = new Report();
	pfr->getProduct();
	psm->getProduct();	
	pmbc->getProduct();
	IElectronics* pe[Size]{ pwm, pcm, pfr, psm , pmbc};

	char ch;
	bool _true = true;	
	while (_true)
	{
		cout << "�������� ��������� ��������� : 1 - �� ������� �������, 2 - �� �������� 3 - �� ������ ��������"
			"��� q - ��� ������  :  ";		
		cin >> ch;
		cout << endl;
		switch (ch)
		{

		 case '1':
			for (int i = 0; i < Size; ++i)
				if (dynamic_cast<Appliances*>(pe[i]))					
					pe[i]->show();
					break;				
		 case '2': 
			for (int i = 0; i < Size; ++i)
				if (dynamic_cast<Devise*>(pe[i]))
					pe[i]->show();
				break;
		 case '3': 
			 for (int i = 0; i < Size; ++i)
				     pe[i]->show();
			    break;
		 case 'q':
				 _true = false;
				 break;
		 default: cout << "�� ������� ���������! \n";
			     break;
		}
		cout << endl;
	}	
	
	
	r->show();

	delete paf; delete paw; delete pdc;	delete pds;
	delete pfr;	delete pwm;	delete pcm;	delete psm;	
	delete r;   delete pamb, delete pmbc;
	
	
	return 0;
}