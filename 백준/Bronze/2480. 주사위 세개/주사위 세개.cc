#include<iostream>
using namespace std;

int main()
{

	int a, b, c, reward;

	cin >> a >> b >> c;

	if (a == b && a == c)
	{
		cout<< 10000 + a * 1000;
	}
	else if ((a == b && a != c) || (b == c && a != c) || (a == c && a != b))
	{
		if (a == b)
		{
			cout<< 1000 + a * 100;
		}
		else if (a == c)
		{
			cout<< 1000 + a * 100;
		}
		else if (b == c)
		{
			cout<< 1000 + b * 100;
		}

	}
	else if (a != b && a != c && b != c)
	{
		if (a > b && a > c)
		{
			cout<< a * 100;
		}
		else if (b > a && b > c) 
		{
			cout<< b * 100;
		}
		else if (a < c && b < c)
		{
			cout<< c * 100;
		}
	}
	return 0;
}