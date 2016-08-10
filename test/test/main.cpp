#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;


void myf(int &tv, int &tx, string t, char z) {
	stringstream ss;
	int temp = 0;
	for (int i = 0, j = 0; i < t.length(); i++)
	{
		if ((t[i] == '+' || t[i] == '-') && i != 0)
		{
			if (t[i - 1] == z)
			{
				if (i == 1)
				{
					tx += 1;
					j = i;
				}
				else if (t[i - 2] == '+')
				{
					tx += 1;
					j = i;
				}
				else if (t[i - 2] == '-')
				{
					tx += -1;
					j = i;
				}
				else {
					ss << t.substr(j, i - j - 1);
					ss >> temp;
					tx += temp;
					temp = 0;
					ss.clear();
					j = i;
				}
			}
			else
			{
				ss << t.substr(j, i - j);
				ss >> temp;
				tv += temp;
				temp = 0;
				ss.clear();
				j = i;
			}
		}
		else if (i == t.length() - 1)
		{
			if (t[i] == z)
			{
				if (t[i - 1] == '+')
				{
					tx += 1;
					j = i;
				}
				else if (t[i - 1] == '-')
				{
					tx += -1;
					j = i;
				}
				else {
					ss << t.substr(j, i - j);
					ss >> temp;
					tx += temp;
					temp = 0;
					ss.clear();
				}
			}
			else
			{
				ss << t.substr(j, i - j + 1);
				ss >> temp;
				tv += temp;
				temp = 0;
				ss.clear();
			}
		}
	}
}
int main()
{
	string data;

	getline(cin, data);
	int deng = data.find('=');
	char x;
	for (int i = 0; i < data.length(); i++)
	{
		if (data[i] <= 'z'&&data[i] >= 'a')
		{
			x = data[i];
			break;
		}
	}
	string a, b;
	int ax = 0, bx = 0, av = 0, bv = 0;
	a.assign(data, 0, deng);//从data的0位开始复制deng长度的字符串到a中
	b.assign(data, deng + 1, data.length() - 1 - deng);
	myf(av, ax, a, x);
	myf(bv, bx, b, x);
	double ret = (bv - av)*1.0 / (ax - bx);
	cout << fixed << setprecision(3);
	cout << x << "=" << ret + 0.000001 << endl;

}