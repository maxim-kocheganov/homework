#include <iostream>
#include <cstdlib>
using namespace std;
int inputNum();

const int max = 10;
const int err = -1;

int main()
{
	int tvarp;
	while (true)
	{
		tvarp = inputNum();
		cout << "tvarp: " << tvarp << endl;
		if (tvarp != err)
		{
			int tax = 0;
			if (tvarp - 5000 > 0)
				tax += ((tvarp - 5000) % 10000) / 10;
			if (tvarp - 5000 - 10000 > 0)
				tax += (((tvarp - 5000 - 10000) % 20000) * 15) / 100;
			if (tvarp - 5000 - 10000 - 20000 > 0)
				tax += (tvarp - 5000 - 10000 - 20000) / 5;

			cout << "tax:   " << tax << endl;
		}
		else
		{
			cout << "end" << endl;
			break;
		}
	}
	_sleep(10000);
	return 0;
}
int inputNum()
{
	int a;
	char buf[max] = {};
	cin.read(buf,max);
	for (int i = 0; i < max; i++)
	{
		if (isdigit(buf[i]))
			continue;
		else
		{
			if (buf[i] == '\0')
				break;
			else
				return err;
		}

	}
	a = atoi(buf);
	if (a < 0)
		a = err;
	return a;
}
