#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a;
	cin >> b;
	c = 0;
	for (int i = a; i <= b; i++)
		c += i;
	cout << c;
	return 0;
}
