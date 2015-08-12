#include <iostream>
#include <exception>

using namespace std;

int main()
{
	try
	{
		throw "h";
	}
	catch (char e)
	{
		cout << e;
	}

	system("pause");
}