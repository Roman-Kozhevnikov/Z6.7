#include "Report.h"
#include <iostream>

using namespace std;

Report::Report()	            
{
	
}

void Report::getProduct()
{
	cout << "Для отчёта функция getProduct() не испьзуется!" << endl;
}
void Report::outProduct()
{
	cout << "Для отчёта функция outProduct() не используется!" << endl;
}

void Report::show() const
{
	cout << _nameRpt << endl;
	cout << "Общее количество дивайсов" << " : " << _numCtgD << endl;
	cout << "Общее количество компьютеров" << " : " << _numCmp << endl;
	cout << "Общее количество смартфонов" << " : " << _numSmph << endl;
	cout << "Общее количество бытовой техники" << " : " << _numCtgA << endl;
	cout << "Общее количество холодильников"<<" : " << _numFR << endl;
	cout << "Общее количество стиральных машин" << " : " << _numWM << endl;
	cout << "Общее количество мобильных кондиционеров" << " : " <<_numMbl << endl;
}


