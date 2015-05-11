#include<iostream>
using namespace std;
int main()
{
	const int max = 128;
	int count = 0;
	string* arr[max] = {};	
	
	string tmp;
	while(true)
	{
		cin >> tmp;
		if(tmp.compare("done"))
		{
			if(count < max)
			{
				arr[count] = new string(tmp);
				count++;				
			}
			else
			{
				cout << "Out of memory" << endl;
				break;
			}
		}
		else
			break;
	}
	cout << "Words: " << count << endl;
	return 0;
}
