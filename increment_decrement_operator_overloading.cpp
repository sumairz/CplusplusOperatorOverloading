#include <iostream>

using namespace std;

class incdecOperatorOverload
{
	private:
		int num;

	public:
		incdecOperatorOverload()
		{
			this->num = 0;
		}

		incdecOperatorOverload ( int n )
		{
			this->num = n;
		}

		// For prefix increment
		void operator++ ( )
		{
			cout << "Prefix increment: " << this->num << endl;
		}

		// For postfix increment
		void operator++ ( int )
		{
			cout << "Postfix increment: " << ++this->num << endl;
		}

};


int main()
{
	incdecOperatorOverload D1(1);
	
	D1++; // postfix increment
	++D1; //prefix increment

	system("pause");
	return 0;
}