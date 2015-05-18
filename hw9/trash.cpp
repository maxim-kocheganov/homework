
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
/*
2. Плорг из Бетельгейзе обладает следующими свойствами:
Данные
• плорг имеет имя не длиннее 19 символов;
• плорг имеет индекс удовлетворенности (contentment index — CI),
выражаемый целым числом.
Операции
• новый плорг начинает существование с именем и индексом СІ равным 50;
• индекс СІ плорга может изменяться;
• плорг может сообщать свое имя и индекс СI,
• по умолчанию плорг имеет имя ""Plorga"".
Напишите объявление класса Plorg (включая данные-члены и прототипы функций-членов), который представляет плорга. Напишите определения функций-членов. Напишите короткую программу, демонстрирующую все средства класса Plorg."
*/
class Plorg
{
private:
	string name;
	int CI;
public:
	Plorg(string name = "Plorga",int CI = 50)
	{
		int l = name.size();
		if (!(l > 19))
			this->name = name;
		else
		{
			char buffer[20];
			std::size_t length = name.copy(buffer, 19, 0);
			buffer[19] = '\0';
			this->name.assign(buffer);
		}
		this->CI = CI;
	}
	void ReportStats()
	{
		cout << (int)this->CI << endl;
		cout << "Plorg at: " << hex << showbase << internal << setw(10) << setfill('0') << (int)this << " reports:" << endl \
			<< "\tName: " << name.c_str() << endl << "\tCI : " << dec << noshowbase << CI << endl;
	}
	void PrintP()
	{
		cout << name.c_str() << endl << "\tthis: " << this << endl << "\tCI: " << (int)(&this->CI) << endl;
	}
};
int main()
{
	Plorg pl1("superlongnamewhichwillbecut");
	Plorg pl2("lolka",30);
	Plorg pl3("batya");
	pl1.PrintP();
	pl2.PrintP();
	pl3.PrintP();
	int shift;
	cin >> shift;
	int* pVal = (int*)(shift);
	cout << "Value is: " << dec << *pVal << endl;
	system("pause");
	return 0;
}
