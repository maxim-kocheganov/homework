#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//"1. Пусть имеется следующее объявление класса: 
class Time
{
private:
	int hour; // 0 - 23 24-часовой формат времени) 
	int minute; //0-59 
	int second; //0-59 
public:
	Time(); // конструктор 
	void setTime(int, int, int); // установить час, минуту, секунду 
	void printUniversal(); // напечатать в формате всемирного времени 
	void printStandard(); // напечатать в стандартном формате времени 
};
//	Создайте определения функций-членов
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}
void Time::setTime(int h, int m, int s)
{
	long sec = s + m * 60 + h * 3600;
	hour = (sec % (3600 * 24)) / 3600;
	minute = (sec % 3600) / 60;
	second = (sec % 60);
}
void Time::printUniversal()
{
	cout << "Universal: " << setfill('0') << setw(2) << hour << ":" \
		<< setfill('0') << setw(2) << minute << ":"  \
		<< setfill('0') << setw(2) << second << endl;
}
void Time::printStandard()
{
	cout << "Standard:";
	if (hour > 0)
		cout << " hours " << hour;
	if (minute > 0)
		cout << " min " << minute;
	cout << " sec " << second;
	cout << endl;
}
// и напишите программу, которая  
//	использует этот класс.
int main()
{
	Time time;
	int a, b, c;
	cin >> a >> b >> c;
	time.setTime(a, b, c);
	time.printUniversal();
	time.printStandard();
	system("pause");
	return 0;
}
