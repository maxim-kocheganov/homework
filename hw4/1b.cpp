#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<string> arr;
	string tmp;
	while(true)
	{
		cin >> tmp;
		if(tmp.compare("done"))
			arr.push_back(tmp);
		else
			break;
	}
	cout << "Words: " << arr.size();
	return 0;
}
