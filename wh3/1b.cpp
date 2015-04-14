#include <iostream>
#include <string>

using namespace std;
struct sPizza
{
	string Company;
	float diam;
	int weit;
};
int main()
{
	sPizza pizza;
	getline(cin,pizza.Company);
	cin >> pizza.diam;
	cin >> pizza.weit;
	cout << "Pizza: " << endl;
	cout << "pizza.Company = " << pizza.Company << endl;
	cout << "pizza.diam = " << pizza.diam << endl;
	cout << "pizza.weit = " << pizza.weit << endl;
	return 0;
}
