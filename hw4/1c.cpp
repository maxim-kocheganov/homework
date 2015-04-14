#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n == 0) || (n < 0))
		cout << "Out of range";
	for(int N = 0; N < n; N++)
		for(int M = 0; M < n; M++)
		{
			if (N != M)
				cout << " 0";
			else
				cout << " 1";
			if (M == n - 1)
			cout << endl;
		}
	return 0;	
}
