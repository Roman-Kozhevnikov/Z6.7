#include <iostream>
#include "Report.h"
#include "MobileCond.h"
#include <typeinfo>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int Size = 5;
	Appliances* paf = new Appliances("Холодильники");
	Appliances* paw = new Appliances("Стиральные машинки");
	Appliances* pamb = new Appliances("Мобильые кондиционеры");
	Devise* pdc = new Devise("Компьютеры");
	Devise* pds = new Devise("Смартфоны");
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
		cout << "Выбирете категорию просмотра : 1 - по бытовой технике, 2 - по дивайсам 3 - по всмему магазину"
			"или q - для выхода  :  ";		
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
		 default: cout << "Не выбрана категория! \n";
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