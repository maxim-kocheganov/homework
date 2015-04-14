#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	string fam;
	string third;
	cin >> name;
	cin >> fam;
	third.append(fam);
	third.append(", ");
	third.append(name);
	cout << third << endl;
	return 0;
}
