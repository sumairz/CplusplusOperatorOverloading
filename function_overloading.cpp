#include <iostream>

using namespace std;

class PrintData
{
	public:

		void print ( int i )
		{
			cout << "printing integer: " << i << endl;
		}

		void print ( double d )
		{
			cout << "printing double: " << d << endl;
		}

		void print ( char* c )
		{
			cout << "printing character: " << c << endl;
		}
};


int main(void)
{
	PrintData pd;

	pd.print(12);

	pd.print(12.3);

	pd.print("sumair");

	system("pause");

	return 0;
}